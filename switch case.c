#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    int a;
    char b;

    printf("Digite uma Opção");
    scanf("%d", &a);
    switch (a){
        case 1:
            printf("Opção Escolhida 1 \n");
            break;
        case 2:
            printf("Opção Escolhida 2 \n");
            break;
        case 3:
            printf("Opção Escolhida 3 \n");
            break;
        default:
            printf("Opção Invalida \n");
            break;
    }
    fflush(stdin);
    printf("Digite uma letra \n");
    scanf("%c", &b);
    switch (b){
        case 'x':
            printf("a letra é x \n");
            break;
        default:
            printf("Opção Invalida \n");
            break;
}
}
