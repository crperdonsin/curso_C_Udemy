#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    int a;
    char b;

    printf("Digite uma Op��o");
    scanf("%d", &a);
    switch (a){
        case 1:
            printf("Op��o Escolhida 1 \n");
            break;
        case 2:
            printf("Op��o Escolhida 2 \n");
            break;
        case 3:
            printf("Op��o Escolhida 3 \n");
            break;
        default:
            printf("Op��o Invalida \n");
            break;
    }
    fflush(stdin);
    printf("Digite uma letra \n");
    scanf("%c", &b);
    switch (b){
        case 'x':
            printf("a letra � x \n");
            break;
        default:
            printf("Op��o Invalida \n");
            break;
}
}
