#include <stdio.h>

struct Pessoa {
	int idade;
	float peso;
	float altura;
};

void ex7();

int main() {
  ex7();
  return 0;
}

void ex7() {
	struct Pessoa p1, p2, p3;
	p1.idade = 30;
	p1.peso = 75.5;
	p1.altura = 1.75;

	p2.idade = 70;
	p2.peso = 56.7;
	p2.altura = 1.65;

	p3.idade = 18;
	p3.peso = 70.2;
	p3.altura = 1.77;

	struct Pessoa pessoas[] = {p1, p2, p3};
	for (int i = 0; i < 3; ++i) {
		printf("Pessoa %d:\n", i+1);
		printf("Idade: %d\n", pessoas[i].idade);
		printf("Peso: %f\n", pessoas[i].peso);
		printf("Altura: %f\n", pessoas[i].altura);
	}
}
