#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;
#define TAM 3

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    // ler 3 valores e adicionar para um vetor
    // calcule a m�dia dos valores acessando o vetor
    float  vetor[3], media;
    int i; // A Variavel i tem que ser inteira

    for (i = 0; i < TAM; i++){
        printf("Digite o Valor \n");
        scanf("%f", &vetor[i]);
    }
    media = (vetor[0] + vetor [1] + vetor [2]) / 3;

    printf("A Media entre %.2f, %.2f e %.2f �: %.2f", vetor[0], vetor[1], vetor[2], media);

}
