#include <stdio.h>
#include <stdlib.h>

int* alocavetor(int tam){
    int *aux;
    aux = (int*) malloc(tam * sizeof(int));
    return aux;
}

int main(){
    int *vetor, tam, i;
    printf("DIgite um valor para o vetor");
    scanf("%d", &tam);
    vetor = (alocavetor(tam));

    for(i = 0; i < tam; i++){
        vetor[i]= +1;
    }

    for(i = 0; i < tam; i++){
        printf("%d\n", vetor[i]);
    }
    free(vetor);
    return 0;
}