#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    // Informe se um numero é primo

    int i, valor, aux =0;

    printf("Digite um Valor Inteiro para verificar se é um numero primo: ");
    scanf("%d", &valor);

    for (i = 1; i <= valor; i++){
        if(valor % i == 0){
        aux++;
        }
        printf("%d / %d tem o resto da divisão: %d \n", valor, i, valor % i);
    }

    if(aux == 2){
        printf("O Numero %d é primo", valor);
    }else{
        printf("O Número %d não é primo, pois ele tem %d divisores", valor, aux);
    }
}

