#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;

    float a, b, r;
    char c;
    printf("*******************************************************************************\n");
    printf("**************************CALCULADORA 0.1 EXERCICIO 6**************************\n");
    printf("*******************************************************************************\n");
    printf("=================ATENÇÃO PARA NÚMEROS DECIMAIS UTILIZE VIRGULA=================\n");
    printf("*******************************************************************************\n");
    printf("***Digite A para somar, S para subtrair, M para Multiplicar e D para dividir***\n");
    printf("*******************************************************************************\n");
    printf("*****'A' DE ADIÇÃO, 'S' DE SUBTRAÇÃO, 'M' DE MULTIPLICAÇÃO E 'D' DE DIVISÃO****\n");
    printf("*******************************************************************************\n");
    printf("\n");
    printf(">>>Digite um valor:");
    scanf("%f", &a);
    printf(">>>Digite um valor:");
    scanf("%f", &b);
    fflush(stdin);
    printf("Escolha a Operação: 'A' 'S' 'M' 'D'\n");
    scanf("%c", &c);
        switch (c){
    case 'A':
        r = a+b;
        printf("O Resultado da soma é: %.2f", r);
        break;
    case 'S':
        r = a-b;
        printf("O Resultado da Subtração é %.2f", r);
        break;
    case 'M':
        r = a*b;
        printf("O Resultado da Subração é %.2f",  r);
        break;
    case 'D':
        r = a/b;
        printf("O Resultado da Divisão é %.2f", r);
        break;
    default:
        printf("Você digitou uma opção inválida");
}
}
