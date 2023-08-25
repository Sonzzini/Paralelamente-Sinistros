#include<stdio.h>

int main() {
	int n1 = 9, n2 = 4, n3 = 7;
	float me = 6;
	
	float nFinal = (n1 + (n2*2) + (n3*3) + me)/7;

	printf("Nota final: %f = ", nFinal);
	
	if (nFinal >= 9) {
		printf("A\n");
	}
	else if (nFinal >= 7.5) {
		printf("B\n");
	}
	else if (nFinal >= 6) {
		printf("C\n");
	}
	else if (nFinal >= 4) {
		printf("D\n");
	}
	else {
		printf("E\n");
	}
}

