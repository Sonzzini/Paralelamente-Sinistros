#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    pid_t pid;
    int i, num, j;

    printf("Digite o número do fatorial: ");
    scanf("%d", &num);

    pid = fork();

    if(pid == 0){
	j = num;
        for(i=1; j>1; j=j-1){
            i=i*j;
        }
        printf("O fatorial de %d é: %d", num, i);
    }

    else if(pid > 0){
        wait(NULL);
        printf("\n\nProcesso pai finalizado\n");
    }

    return 0;
}
