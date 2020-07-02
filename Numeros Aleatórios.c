#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
#include <time.h> // Para números Aleatorios

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;

    srand((unsigned)time(NULL));
    // Variavél receve o resto da divisão por 3, sempre sera 0, 1 ou 2;
    int aleatorio = rand () % 3;

    // Variavel receve o resto da divisão por 5, sempre sera entre 0 e 4, para ser entre 0 e 5 é so somar 1;
    int aleatorio2 = (rand () % 5) + 1;

    printf("%d Entre 0 e 2 \n", aleatorio);
    printf("%d Entre 0 e 5 \n", aleatorio2);
}

