#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    bool a = true, b = false;
    //Se a for verdadeiro
    if (a){
        printf(" A � Verdadeiro \n");
    }
    // Comparando o B
    if(b){
        printf("B � verdadeiro \n");
        }
        else{
            printf("B � falso \n");
        }
    if(!b){
        printf("B � falso");
    }
}

