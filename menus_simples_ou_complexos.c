#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    int opcao;
    while(opcao < 1 || opcao > 3){
    // Menu Simples
    printf("Escolha uma op��o: \n");
    printf("OP��O 1: \n");
    printf("OP��O 2: \n");
    printf("OP��O 3: \n");

    scanf("%d", &opcao);

    switch(opcao){
        case 1:
        printf("OPC�O 1 \n");
        break;
        case 2:
            printf("OP��O 2 \n");
        break;
        case 3:
        printf("OP��O 4 \n");
        break;
        default:
            printf("Inv�lida");
        break;
    }
    }
}
