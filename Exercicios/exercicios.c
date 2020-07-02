#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Funçao para usar acentos;

    // Crie um algoritimo que leia duas notas e mostre a media entre elas
    float a, b; //Come�a sempre criando as variaveis2
    printf("***** Digite a nota da primeira prova: ");
    scanf("%f", &a);
    printf("*****Digite a nota da segunda prova: ");
        scanf("%f", &b);
    printf("A Media � %f", (a+b)/2);
}
