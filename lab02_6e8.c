#include <stdio.h>

void ex6e8();

int main() {
  ex6e8();
  return 0;
}

void ex6e8() {
	int m[2][3] = {{1, 2, 3}, 
								{4, 5, 6}};

	int m_Transposta[3][2] = {{0, 0}, 
														{0, 0}, 
														{0, 0}};

	printf("Matriz original:\n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			int num = m[i][j];
			m_Transposta[j][i] = num;
		}
	}

	printf("\nMatriz transposta:\n");
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 2; ++j) {
			printf("%d ", m_Transposta[i][j]);
		}
		printf("\n");
	}
}

