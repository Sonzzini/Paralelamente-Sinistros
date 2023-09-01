#include <stdio.h>

void ex5e10();

int main() {
  ex5e10();
  return 0;
}

void ex5e10(){
  printf("ex5 e 10:\n");
  int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  for(int i = 0 ; i < 3 ; i++){
    matriz[0][i]*= 2; //multiplicar linha por 2
    matriz[i][0]*=3; //multiplicar coluna por 3
  }
  for (int i = 0;i<3;i++){
    printf("\n");
    for(int j = 0 ; j< 3;j++){
      printf("%d\t", matriz[i][j]);
    }
  }
}
