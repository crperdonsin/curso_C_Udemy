#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    // Imprima os numeros pares de 10 a 20
    // usando while, do while e for
    char palavra[100]; // define a quantidade de caracteres
    printf("Digite uma Palavra \n");
    setbuf(stdin, 0);

    fgets(palavra, 100, stdin); // define a quantidade de caracteres imprimiveis

    // Limpa as Casas n�o utilizadas

    palavra [strlen(palavra)-1] = '\0';

    printf("%s", palavra);

}
