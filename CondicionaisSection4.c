#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    int a = 2, opcao = 2;
    float b = 2.5;
    char c = 'x';

    //Condicional Simples
    if (a == 2 ){
        printf("A Variável a = %d \n", a);
    }
    if (b == 2.5){
        printf("A Variavel b = %f \n", b);
    }
    if (c =='x'){
        printf("A Variavvel c = %c \n", c);
    }

    //Par ou impar
    if(a% 2 == 1){
        printf("A Variavel a é impar");
    }else{
        printf("A Variavel a é par \n");
    }
    //Condicinal Composta
    if(opcao == 1){
        printf("\n a opcao é = 1");
    }else if (opcao == 2){
        printf("a opcao = 2");
    }else {
        printf("A opcao não é igual a 1 ou 2");
    }
}

