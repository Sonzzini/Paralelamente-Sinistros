#include <stdio.h>
#include <omp.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N = 1000;
    double **A, **B, **C;

    // Alocar memória para as matrizes A, B e C
    A = (double **)malloc(N * sizeof(double *));
    B = (double **)malloc(N * sizeof(double *));
    C = (double **)malloc(N * sizeof(double *));
    for (int i = 0; i < N; i++) {
        A[i] = (double *)malloc(N * sizeof(double));
        B[i] = (double *)malloc(N * sizeof(double));
        C[i] = (double *)malloc(N * sizeof(double));
    }

    // Inicialize as matrizes A e B com valores aleatórios
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = (double)rand() / RAND_MAX;  // Valor aleatório entre 0 e 1
            B[i][j] = (double)rand() / RAND_MAX;  // Valor aleatório entre 0 e 1
        }
    }

    clock_t start_time, end_time;
    start_time = clock(); // Registrar o tempo inicial

    #pragma omp parallel for
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0.0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    end_time = clock(); // Registrar o tempo final
    double execution_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Tempo de execução: %f segundos\n", execution_time);

    // Liberar a memória alocada
    for (int i = 0; i < N; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}

