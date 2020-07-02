#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    int opcao;
    while(opcao < 1 || opcao > 3){
    // Menu Simples
    printf("Escolha uma opção: \n");
    printf("OPÇÃO 1: \n");
    printf("OPÇÃO 2: \n");
    printf("OPÇÃO 3: \n");

    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        printf("OPCÃO 1 \n");
        break;
        case 2:
            printf("OPÇÃO 2 \n");
        break;
        case 3:
        printf("OPÇÃO 4 \n");
        break;
        default:
            printf("Inválida");
        break;
    }
    }
}
