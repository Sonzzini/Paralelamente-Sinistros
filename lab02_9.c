#include <stdio.h>

void ex9() {
  printf("ex9:\n");
	int m[3][3] = {{1, -2, 3},
						{-4, 5, 6},
						{-7, 8, -9}};

	printf("Matriz original:\n");
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3 ; j++) {
			if (m[i][j] < 0) {
				m[i][j] = -m[i][j];
			}
		}
	}

	printf("Matriz com módulo:\n");
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
}

int main() {
  ex9();
  return 0;
}

