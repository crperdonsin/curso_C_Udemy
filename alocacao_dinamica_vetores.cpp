#include <stdio.h>
#include <stdlib.h>
#include <new>

int main(){

    int tam, i;
    
    printf("Digite o Tamanho");
    scanf("%d", &tam);

    int * vetor = new int[tam];

    for(i = 0; i < tam; i ++){
        vetor[i] = i;
        printf("\n%d\n", vetor[i]);
    }
    return 0;
}
