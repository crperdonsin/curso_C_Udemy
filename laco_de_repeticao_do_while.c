#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    int a = 1, b = 10;
    // Primeiro confere a condição depois executa;
    while( a <= 10){
        printf("%d \n", a);
        // Incremento
        a= a + 1; // Se for VAR + 1 pode usar: a++
    }
    a = 20;
    //Executa primeiro depois confere a codição;
    do{
        printf("%d \n", a);
        // Incremento
        a= a + 1;
    }
    while( a <= 10);
   }

