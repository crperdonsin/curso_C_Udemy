#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;
#define TAM 3

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    int vetor[3], i; // vetor e quantidade entre [];

    // definindo valores dos vetores
    vetor[0] = 5; // a posi��o inicial � sempre zero
    vetor[1] = 10;
    vetor[2] = 15;

    // exibindo os vetores;
    printf("posi��o original 0: %d \n", vetor[0]);
    printf("posi��o original 1: %d \n", vetor[1]);
    printf("posi��o original 2: %d \n", vetor[2]);

    //adicionando 1 para cada posi��o
    for(i = 0; i < TAM; i++){
        vetor[i] = vetor[i]+1;
    }

    // exibindo os vetores;
    printf("posi��o adicionada de 1; 0: %d \n", vetor[0]);
    printf("posi��o adicionada de 1; 1: %d \n", vetor[1]);
    printf("posi��o adicionada de 1; %d \n", vetor[2]);

    // exibindo em la�o de repeti��o;

    for(i = 0; i < TAM; i++){
        printf("Posi��o exibida em la�o %d: %d \n", i, vetor[i]);
    }

    //lendo valores para o vetor
    for(i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
    }
        for(i = 0; i < TAM; i++){
        printf("Posi��o lida %d: %d \n", i, vetor[i]);
}
}

