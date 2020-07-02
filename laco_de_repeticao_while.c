#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    int a = 1, b = 10;
    while( a <= 10){
        printf("%d \n", a);
        // Incremento
        a= a + 1; // Se for VAR + 1 pode usar: a++
    }
    //Contagem Regressiva
    while ( b >= 1){
        printf("%d \n", b);
        b = b -1; //Se for usar VAR - 1 pode usar b--
    }

}

