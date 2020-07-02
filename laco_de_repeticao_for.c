
#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    int i; // Variaveis dentro de um for começam pela letra i;

    //Tabuada do 5
    for (i = 1; i <= 10; i++){
        printf("5 X %d = %d \n", i, 5 * i);
    }
    // Contando de 2 em 2
    for(i = 0; i <= 10; i = i + 2){
        printf("%d \n", i);
    }

}
