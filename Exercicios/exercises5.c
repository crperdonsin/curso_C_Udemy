#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>//Para Usar booleanas;

void main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    // Crie um algoritimo que leia três valores e informe se eles são iguais
    // entre si para formarem um triangulo equilátero
    float a, b, c;
    printf("Digite um o valor a: ");
    scanf("%f", &a);
    printf("Digite o valor b: \n");
    scanf("%f", &b);
    printf("Digite o valor c: \n");
    scanf("%f", &c);

    if ((a == b) && (b == c)){                  //  Todos os Lados Iguais
        printf("É um triângulo equilátero \n");
    }else{
        if ((a == b) || (b == c) || (a == c)){  // Pelo Menos dois lados iguas
            printf("o triangulo é isoceles");
        }else{                                      // Nenhum lado igual
            printf("O Triagulo é escaleno");
        }
    }
}
