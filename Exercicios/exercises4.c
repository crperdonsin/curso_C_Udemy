#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    float a ,b ,c , d;
    printf("Digite 3 notas\n");
    scanf("%f %f %f", &a, &b, &c);
    d = (a + b +c)/3;
    if (d >= 70){
        printf(" A sua Media � %f.\nParab�ns voc� foi aprovado!", d);
    }
    else{
        printf("A sua m�dia � %f. \nQue pena voc� foi reprovado!", d);
    }
}
