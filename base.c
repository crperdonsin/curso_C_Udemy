#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;

void retornasucessor(int numero);
int retornaantecesor(int numero);

int main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    int a;

    printf("Digite um Número");
    scanf("%d", &a);
    retornasucessor(a);
    printf("\nO Antecessor de %d é %d \n", a, retornaantecesor(a));
return 0;
}
void retornasucessor(int numero){
        printf("\nO Sucessor de %d é %d", numero, numero+1);
}
int retornaantecesor(int numero){
    return numero-1;
}
