#include <stdio.h>

void ex4() {
  printf("Ex 4:");
  char nome1[] = "Maria";
  char nome2[] = "João";

  if (strcmp(nome1, nome2) > 0) {
    char temp[50];
    strcpy(temp, nome1);
    strcpy(nome1, nome2);
    strcpy(nome2, temp);
    }
  printf("Nomes em ordem alfabética: %s, %s\n", nome1, nome2);
}

int main() {
  ex4();
  return 0;
}

