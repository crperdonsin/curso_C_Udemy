#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    int a, b, c, d;

    printf("Digite 3 Valores: ");
    scanf("%d %d %d", &a, &b, &c);
    d = a *b * c;
    printf("O Resultado é: %d", d);
}
