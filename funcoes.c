#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>

int retorna10(); // Mostrar que a Função existe
float retornafloat();
char caracter();
bool retornabooleano();

int main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    int a = retorna10(), c;
    float b = retornafloat();
    char letra = caracter();
    bool boleana = retornabooleano();

    printf("%d\n",a);

    printf("\n%.2f", b);

    printf("\n%c", letra);

    printf("\n%d então: ", boleana);

    if(boleana){
        printf("é Verdadeiro");
    }else{
        printf("é Falso");
    }
    system("CLS"); //Limpar a Tela

    system('pause');
}
int retorna10(){
    return 10;
}
float retornafloat(){
    return 5.5;
}
char caracter(){
    return'x';
}
bool retornabooleano(){
    return false;
}
