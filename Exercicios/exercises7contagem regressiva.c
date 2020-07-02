#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    // crie um algoritimo que imprima numeros de 10 - 0
    // de forma regressiva, usando wille, do wille e for

    int i = 10;
    printf("While \n");
    while (i >= 0){
        printf("%d \n", i);
        i = i - 1;
    }
    printf("Agora do while \n");
    i=10;
    do{
        printf("%d \n", i);
        i = i - 1;
    }
    while (i >= 0);

    printf("Agora com o For \n");
    for(i = 10; i >= 0; i= i - 1){
        printf("%d \n", i);
    }
}

