#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;

void retornasucessor(int numero);
int retornaantecesor(int numero);

int main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    int a;

    printf("Digite um N�mero");
    scanf("%d", &a);
    retornasucessor(a);
    printf("\nO Antecessor de %d � %d \n", a, retornaantecesor(a));
return 0;
}
void retornasucessor(int numero){
        printf("\nO Sucessor de %d � %d", numero, numero+1);
}
int retornaantecesor(int numero){
    return numero-1;
}
