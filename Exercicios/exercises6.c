#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;

    float a, b, r;
    char c;
    printf("*******************************************************************************\n");
    printf("**************************CALCULADORA 0.1 EXERCICIO 6**************************\n");
    printf("*******************************************************************************\n");
    printf("=================ATEN��O PARA N�MEROS DECIMAIS UTILIZE VIRGULA=================\n");
    printf("*******************************************************************************\n");
    printf("***Digite A para somar, S para subtrair, M para Multiplicar e D para dividir***\n");
    printf("*******************************************************************************\n");
    printf("*****'A' DE ADI��O, 'S' DE SUBTRA��O, 'M' DE MULTIPLICA��O E 'D' DE DIVIS�O****\n");
    printf("*******************************************************************************\n");
    printf("\n");
    printf(">>>Digite um valor:");
    scanf("%f", &a);
    printf(">>>Digite um valor:");
    scanf("%f", &b);
    fflush(stdin);
    printf("Escolha a Opera��o: 'A' 'S' 'M' 'D'\n");
    scanf("%c", &c);
        switch (c){
    case 'A':
        r = a+b;
        printf("O Resultado da soma �: %.2f", r);
        break;
    case 'S':
        r = a-b;
        printf("O Resultado da Subtra��o � %.2f", r);
        break;
    case 'M':
        r = a*b;
        printf("O Resultado da Subra��o � %.2f",  r);
        break;
    case 'D':
        r = a/b;
        printf("O Resultado da Divis�o � %.2f", r);
        break;
    default:
        printf("Voc� digitou uma op��o inv�lida");
}
}
