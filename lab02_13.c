#include <stdio.h>

void ex13() {
	// remover char de str[100]
	char Str[100] = {'L', 'o', 'r', 'e', 'm', 'i', 'p', 's', 'u', 'm', 'd', 'o', 'l', 'o', 'r', 's', 'i', 't', 'a', 'm', 'e', 't', 'c', 'o', 'n', 's', 'e', 'c', 't', 'e', 't', 'u', 'r', 'a', 'd', 'i', 'p', 'i', 's', 'c', 'i', 'n', 'g', 'e', 'l', 'i', 't', 'n', 'u', 'l', 'l', 'a', 'm', 'i', 'n', 'p', 'u', 'r', 'u', 's', 'a', 'm', 'a', 'u', 'r', 'i', 's', 'g', 'r', 'a', 'v', 'i', 'd', 'a', 'v', 'i', 'v', 'e', 'r', 'r', 'a', 's', 'e', 'd', 't', 'r', 'i', 's', 't', 'i', 'q', 'u', 'e', 'm', 'a', 'l', 'e', 's', 'u', 'a'};

	int index_to_remove = 70;

	printf("String original:\n%s", Str);
	
	Str[index_to_remove] = ' ';
	
	printf("\n\nIndex %d removido:\n%s", index_to_remove, Str);
}

int main() {
  ex13();
  return 0;
}
