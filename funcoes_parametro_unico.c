#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
 // Funções com um parametro
void retornasucessor(int numero); // exemplo de função sem retorno
int retornaantecesor(int numero); // Exemplo de função com retorno
//Funçoes com mais de um parametro
void mostrasoma(int valor1, int valor2);
int retornasoma(int valor1, int valor2);
int main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    int a, b=10;

    printf("Digite um Número");
    scanf("%d", &a);
    retornasucessor(a);
    printf("\nO Antecessor de %d é %d", a, retornaantecesor(a));
    printf("\nFunção Void");
    mostrasoma(a,b);
    printf("\nFunção Int");
    printf("\nA Soma entre %d e %d é %d", a, b, retornasoma(a,b));
return 0;
}

 // Funções com um parametro
void retornasucessor(int numero){
        printf("\nO Sucessor de %d é %d", numero, numero+1);
}
int retornaantecesor(int numero){
    return numero-1;
}
//Funçoes com mais de um parametro
void mostrasoma(int valor1, int valor2){
        printf("\nA Soma entre %d e %d é %d", valor1, valor2, valor1+valor2);
}
int retornasoma(int valor1, int valor2){
    return valor1+valor2;
}
