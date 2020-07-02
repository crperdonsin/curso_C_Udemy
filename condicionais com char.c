#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    char letra = 'x';
    //Comparar usando char
    if (letra == 'x'){
        printf(" A Letra é x \n");
    }
    // Comparar usando o codigo da tabela ascii
       if (letra ==120){
        printf(" A Letra é x \n");
    }
    printf("O Código de %c é %d \n", letra, letra);
}
