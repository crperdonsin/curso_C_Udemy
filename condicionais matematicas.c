#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    int a =5, b = 10, c = 15;
    char d = 'a', e = '1';
     // Maior
        if (b > a){
        printf("\n %d é maior que %d", b, a);
    }
    // Menor
    if (a < b){
        printf("\n %d é menor que %d",a,b);
    }
    //  Maior ou igual
    if (c >= b){
        printf("\n %d é maior ou igual a %d", c, b);
    }
    // Difente
    if (c != b){
        printf("\n %d é diferende de %d",b ,c);
    }
    // Charactere
    if (d != e){
        printf("\n %c é diferente de %c \n", d, e);
    }
}


