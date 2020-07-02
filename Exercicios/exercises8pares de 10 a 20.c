#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    // Imprima os numeros pares de 10 a 20
    // usando while, do while e for
    int i = 10;
    for (i = 10; i <= 20; i = i + 1){
            if(i %2 ==0){
        printf("%d é par;\n", i);
    }else{
        printf("%d é impar;\n", i);
        }
    }
}
