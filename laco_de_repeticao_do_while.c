#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    int a = 1, b = 10;
    // Primeiro confere a condi��o depois executa;
    while( a <= 10){
        printf("%d \n", a);
        // Incremento
        a= a + 1; // Se for VAR + 1 pode usar: a++
    }
    a = 20;
    //Executa primeiro depois confere a codi��o;
    do{
        printf("%d \n", a);
        // Incremento
        a= a + 1;
    }
    while( a <= 10);
   }

