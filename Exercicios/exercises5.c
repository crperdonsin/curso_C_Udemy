#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;

void main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    // Crie um algoritimo que leia tr�s valores e informe se eles s�o iguais
    // entre si para formarem um triangulo equil�tero
    float a, b, c;
    printf("Digite um o valor a: ");
    scanf("%f", &a);
    printf("Digite o valor b: \n");
    scanf("%f", &b);
    printf("Digite o valor c: \n");
    scanf("%f", &c);

    if ((a == b) && (b == c)){                  //  Todos os Lados Iguais
        printf("� um tri�ngulo equil�tero \n");
    }else{
        if ((a == b) || (b == c) || (a == c)){  // Pelo Menos dois lados iguas
            printf("o triangulo � isoceles");
        }else{                                      // Nenhum lado igual
            printf("O Triagulo � escaleno");
        }
    }
}
