#include <stdio.h>

void ex12() {
  printf("Ex12:\n");
	char palavras[100] = "Pepitas de Ferro são o pior item do Minecraft";
	char letraABuscar = 'a';

	printf("Palavra: %s\n", palavras);
	printf("Caracter '%c' encontrado na posição: ", letraABuscar);
	for (int i = 0; i < 100; ++i)
		if (palavras[i] == letraABuscar)
			printf("%d ", i);
}

int main() {
  ex12();
  return 0;
}
