#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;
#define TAM 3

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    // ler 3 valores e adicionar para um vetor
    // calcule a média dos valores acessando o vetor
    float  vetor[3], media;
    int i; // A Variavel i tem que ser inteira

    for (i = 0; i < TAM; i++){
        printf("Digite o Valor \n");
        scanf("%f", &vetor[i]);
    }
    media = (vetor[0] + vetor [1] + vetor [2]) / 3;

    printf("A Media entre %.2f, %.2f e %.2f é: %.2f", vetor[0], vetor[1], vetor[2], media);

}
