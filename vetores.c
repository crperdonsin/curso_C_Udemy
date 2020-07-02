#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;
#define TAM 3

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    int vetor[3], i; // vetor e quantidade entre [];

    // definindo valores dos vetores
    vetor[0] = 5; // a posição inicial é sempre zero
    vetor[1] = 10;
    vetor[2] = 15;

    // exibindo os vetores;
    printf("posição original 0: %d \n", vetor[0]);
    printf("posição original 1: %d \n", vetor[1]);
    printf("posição original 2: %d \n", vetor[2]);

    //adicionando 1 para cada posição
    for(i = 0; i < TAM; i++){
        vetor[i] = vetor[i]+1;
    }

    // exibindo os vetores;
    printf("posição adicionada de 1; 0: %d \n", vetor[0]);
    printf("posição adicionada de 1; 1: %d \n", vetor[1]);
    printf("posição adicionada de 1; %d \n", vetor[2]);

    // exibindo em laço de repetição;

    for(i = 0; i < TAM; i++){
        printf("Posição exibida em laço %d: %d \n", i, vetor[i]);
    }

    //lendo valores para o vetor
    for(i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
    }
        for(i = 0; i < TAM; i++){
        printf("Posição lida %d: %d \n", i, vetor[i]);
}
}

