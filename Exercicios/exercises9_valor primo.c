#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    // Informe se um numero � primo

    int i, valor, aux =0;

    printf("Digite um Valor Inteiro para verificar se � um numero primo: ");
    scanf("%d", &valor);

    for (i = 1; i <= valor; i++){
        if(valor % i == 0){
        aux++;
        }
        printf("%d / %d tem o resto da divis�o: %d \n", valor, i, valor % i);
    }

    if(aux == 2){
        printf("O Numero %d � primo", valor);
    }else{
        printf("O N�mero %d n�o � primo, pois ele tem %d divisores", valor, aux);
    }
}

