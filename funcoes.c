#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
#include <stdbool.h>

int retorna10(); // Mostrar que a Fun��o existe
float retornafloat();
char caracter();
bool retornabooleano();

int main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    int a = retorna10(), c;
    float b = retornafloat();
    char letra = caracter();
    bool boleana = retornabooleano();

    printf("%d\n",a);

    printf("\n%.2f", b);

    printf("\n%c", letra);

    printf("\n%d ent�o: ", boleana);

    if(boleana){
        printf("� Verdadeiro");
    }else{
        printf("� Falso");
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
