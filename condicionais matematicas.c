#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    int a =5, b = 10, c = 15;
    char d = 'a', e = '1';
     // Maior
        if (b > a){
        printf("\n %d � maior que %d", b, a);
    }
    // Menor
    if (a < b){
        printf("\n %d � menor que %d",a,b);
    }
    //  Maior ou igual
    if (c >= b){
        printf("\n %d � maior ou igual a %d", c, b);
    }
    // Difente
    if (c != b){
        printf("\n %d � diferende de %d",b ,c);
    }
    // Charactere
    if (d != e){
        printf("\n %c � diferente de %c \n", d, e);
    }
}


