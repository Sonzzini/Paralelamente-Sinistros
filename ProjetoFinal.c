#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <gmp.h>

void calculate(unsigned long long max, mpf_t result) {
    int nThreads = omp_get_max_threads();
    mpf_t *sum, *fact, *temp;

    sum = (mpf_t *)malloc(nThreads * sizeof(mpf_t));
    fact = (mpf_t *)malloc(nThreads * sizeof(mpf_t));
    temp = (mpf_t *)malloc(nThreads * sizeof(mpf_t));

    for (int i = 0; i < nThreads; ++i) {
        mpf_init2(sum[i], 1024);
        mpf_init2(fact[i], 1024);
        mpf_init2(temp[i], 1024);

        mpf_set_ui(fact[i], 1);
    }

    #pragma omp parallel
    {
        int id = omp_get_thread_num();

        #pragma omp for
        for (int n = 1; n < max; ++n) {
            mpf_mul_ui(fact[id], fact[id], n);
            mpf_ui_div(temp[id], 1, fact[id]);
            mpf_add(sum[id], sum[id], temp[id]);
        }
    }

    #pragma omp parallel for
    for (int i = 1; i < nThreads; i++) {
        mpf_add(sum[0], sum[0], sum[i]);
    }

    mpf_set(result, sum[0]);

    for (int i = 0; i < nThreads; i++) {
        mpf_clear(sum[i]);
        mpf_clear(fact[i]);
        mpf_clear(temp[i]);
    }

    free(sum);
    free(fact);
    free(temp);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <max_termos>\n", argv[0]);
        return 1;
    }

    unsigned long long max = strtoull(argv[1], NULL, 10);
    mpf_set_default_prec(1024);

    mpf_t euler;
    mpf_init(euler);

    double start_time = omp_get_wtime();
    calculate(max, euler);
    double end_time = omp_get_wtime();

    gmp_printf("A aproximação até o termo %llu é:\n%.1000Ff\n", max, euler);
    printf("Tempo de execução: %f segundos\n", end_time - start_time);

    mpf_clear(euler);

    return 0;
}
