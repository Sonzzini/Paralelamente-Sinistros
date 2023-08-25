#include <stdio.h>

int main() {
  int m[3][3] = {
	{1, 2, 3}, 
	{4, 5, 6}, 
	{7, 8, 0}};
	
  int nLine = 0;
	int minimum = m[0][0];
	
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (m[i][j] < minimum) {
				minimum = m[i][j];
				nLine = i;
			}
		}
	}

	printf("Linha com menor número: %d", nLine+1);
  return 0;
	
}

