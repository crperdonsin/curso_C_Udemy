#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    bool a = true, b = false;
    //Se a for verdadeiro
    if (a){
        printf(" A é Verdadeiro \n");
    }
    // Comparando o B
    if(b){
        printf("B é verdadeiro \n");
        }
        else{
            printf("B é falso \n");
        }
    if(!b){
        printf("B é falso");
    }
}

