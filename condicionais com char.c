#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    char letra = 'x';
    //Comparar usando char
    if (letra == 'x'){
        printf(" A Letra � x \n");
    }
    // Comparar usando o codigo da tabela ascii
       if (letra ==120){
        printf(" A Letra � x \n");
    }
    printf("O C�digo de %c � %d \n", letra, letra);
}
