#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    // Conectivo l�gico "e" se uma compara��o for verdadeira, n�o entra no bloco
    int a = 10;
    if(a > 5 && a < 15){
        printf("\n A Variavel a esta entre 5 e 15");
    }
    //Conectivo l�gico "ou" se uma for verdadeira entra no bloco
     if(a > 5 || a >  15){
        printf("\n A Variavel a � maoir que 5 ou maior que 15");
    }
    // Misturando Conectivos L�gicos
    if ((a > 5 && a < 15) || a == 20){
        printf("\n A Variav�l a esta entre 5 e 15 ou � 20");
    }
}



