#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
 // Fun��es com um parametro
void retornasucessor(int numero); // exemplo de fun��o sem retorno
int retornaantecesor(int numero); // Exemplo de fun��o com retorno
//Fun�oes com mais de um parametro
void mostrasoma(int valor1, int valor2);
int retornasoma(int valor1, int valor2);
int main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    int a, b=10;

    printf("Digite um N�mero");
    scanf("%d", &a);
    retornasucessor(a);
    printf("\nO Antecessor de %d � %d", a, retornaantecesor(a));
    printf("\nFun��o Void");
    mostrasoma(a,b);
    printf("\nFun��o Int");
    printf("\nA Soma entre %d e %d � %d", a, b, retornasoma(a,b));
return 0;
}

 // Fun��es com um parametro
void retornasucessor(int numero){
        printf("\nO Sucessor de %d � %d", numero, numero+1);
}
int retornaantecesor(int numero){
    return numero-1;
}
//Fun�oes com mais de um parametro
void mostrasoma(int valor1, int valor2){
        printf("\nA Soma entre %d e %d � %d", valor1, valor2, valor1+valor2);
}
int retornasoma(int valor1, int valor2){
    return valor1+valor2;
}
