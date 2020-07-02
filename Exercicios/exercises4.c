#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    float a ,b ,c , d;
    printf("Digite 3 notas\n");
    scanf("%f %f %f", &a, &b, &c);
    d = (a + b +c)/3;
    if (d >= 70){
        printf(" A sua Media é %f.\nParabéns você foi aprovado!", d);
    }
    else{
        printf("A sua média é %f. \nQue pena você foi reprovado!", d);
    }
}
