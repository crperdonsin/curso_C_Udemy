#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    int a = 2, opcao = 2;
    float b = 2.5;
    char c = 'x';

    //Condicional Simples
    if (a == 2 ){
        printf("A Vari�vel a = %d \n", a);
    }
    if (b == 2.5){
        printf("A Variavel b = %f \n", b);
    }
    if (c =='x'){
        printf("A Variavvel c = %c \n", c);
    }

    //Par ou impar
    if(a% 2 == 1){
        printf("A Variavel a � impar");
    }else{
        printf("A Variavel a � par \n");
    }
    //Condicinal Composta
    if(opcao == 1){
        printf("\n a opcao � = 1");
    }else if (opcao == 2){
        printf("a opcao = 2");
    }else {
        printf("A opcao n�o � igual a 1 ou 2");
    }
}

