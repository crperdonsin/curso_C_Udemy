#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    int a, b, c, d;

    printf("Digite 3 Valores: ");
    scanf("%d %d %d", &a, &b, &c);
    d = a *b * c;
    printf("O Resultado �: %d", d);
}
