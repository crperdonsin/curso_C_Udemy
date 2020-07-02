#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
        // Exercicio leia 2 notas e mostre o valor absoluto da diferença entre elas
void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    int a, b;
    printf("Digite a nota 1: ");
    scanf("%d", &a);
    printf("Digite a nota2:  ");
    scanf("%d", &b);
    printf("O Valor Absoluto da diferença entre %d e %d é:%d .", a, b, abs(a-b));
}
