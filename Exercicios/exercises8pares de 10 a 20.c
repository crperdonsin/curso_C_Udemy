#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    // Imprima os numeros pares de 10 a 20
    // usando while, do while e for
    int i = 10;
    for (i = 10; i <= 20; i = i + 1){
            if(i %2 ==0){
        printf("%d � par;\n", i);
    }else{
        printf("%d � impar;\n", i);
        }
    }
}
