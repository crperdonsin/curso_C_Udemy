#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
#include <time.h> // Para n�meros Aleatorios

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;

    srand((unsigned)time(NULL));
    // Variav�l receve o resto da divis�o por 3, sempre sera 0, 1 ou 2;
    int aleatorio = rand () % 3;

    // Variavel receve o resto da divis�o por 5, sempre sera entre 0 e 4, para ser entre 0 e 5 � so somar 1;
    int aleatorio2 = (rand () % 5) + 1;

    printf("%d Entre 0 e 2 \n", aleatorio);
    printf("%d Entre 0 e 5 \n", aleatorio2);
}

