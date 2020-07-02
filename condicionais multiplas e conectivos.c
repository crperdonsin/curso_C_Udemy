#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    // Conectivo lógico "e" se uma comparação for verdadeira, não entra no bloco
    int a = 10;
    if(a > 5 && a < 15){
        printf("\n A Variavel a esta entre 5 e 15");
    }
    //Conectivo lógico "ou" se uma for verdadeira entra no bloco
     if(a > 5 || a >  15){
        printf("\n A Variavel a é maoir que 5 ou maior que 15");
    }
    // Misturando Conectivos Lógicos
    if ((a > 5 && a < 15) || a == 20){
        printf("\n A Variavél a esta entre 5 e 15 ou é 20");
    }
}



