#include <stdio.h>

void ex11() {
	int m[2][3] = {{1, 2, 3}, {4, 5, 6}};
	int multi[2][3] = {{1, 2, 3}, {4, 5, 6}};

	printf("Matriz original:\n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	for (int j = 0; j < 3; ++j) {
		int sum = m[0][j] + m[1][j];
		m[1][j] = sum;
	}

	printf("\nMatriz resultante de somatória:\n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; ++i) {
		int mult = multi[0][i] * multi[1][i];
		multi[1][i] = mult;
	}

	printf("\nMatriz resultante de multiplicação:\n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%d ", multi[i][j]);
		}
		printf("\n");
	}
	
}

int main() {
  ex11();
  return 0;
}

