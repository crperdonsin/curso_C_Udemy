#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
        // Exercicio leia 2 notas e mostre o valor absoluto da diferen�a entre elas
void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    int a, b;
    printf("Digite a nota 1: ");
    scanf("%d", &a);
    printf("Digite a nota2:  ");
    scanf("%d", &b);
    printf("O Valor Absoluto da diferen�a entre %d e %d �:%d .", a, b, abs(a-b));
}
