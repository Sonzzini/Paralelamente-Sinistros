#include <stdio.h>
#include <omp.h>
#include <time.h>

int main() {
    int n = 1000;
    double a = 0.0;
    double b = 1.0;
    double h = (b - a) / n;
    double integral = 0.0;

    clock_t start_time, end_time;
    start_time = clock(); // Registrar o tempo inicial

    #pragma omp parallel
    {
        #pragma omp for reduction(+:integral)
        for (int i = 1; i < n; i++) {
            double x = a + i * h;
            double fx = x * x;  // Função a ser integrada (no exemplo, f(x) = x^2)
            integral += fx;
        }

        #pragma omp single
        {
            int num_threads = omp_get_num_threads();
            printf("Número de threads utilizadas: %d\n", num_threads);
        }
    }

    integral = 0.5 * (integral + (a * a + b * b)) * h;

    end_time = clock(); // Registrar o tempo final
    double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Resultado da integral: %f\n", integral);
    printf("Tempo de execução: %f segundos\n", execution_time);

    return 0;
}


