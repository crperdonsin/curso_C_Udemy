#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
#define TAM 10 // Define a constante, usar letras maiusculas;
void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    int i;

    printf("%d \n", TAM);

    // contagem regressiva
    for (i = 1; i < 10; i++){
        printf("%d \n", i);
    }
}
