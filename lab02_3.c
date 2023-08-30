#include <stdio.h>

int main() {
  printf("para o caso de entrada 9:\n");
  int total = 9;
	int j = 9;
	int i = 1;
	int spaces = 0;
	
	while (i <= total/2+1) {
		for (int aux = i; aux <= j; aux++) {
			printf("%d", aux);
		}
		printf("\n");
		for (int auxspace = 0; auxspace <= spaces; auxspace++) {
			printf(" ");
		}
		spaces++;
		i++;
		j--;
  	}
}
