#include <stdio.h>//Biblioteca de entrada e sa�da;
#include <stdlib.h>//Biblioteca de opera��es matematicas;
#include <locale.h>//Para usar acentos;
#include <string>
#include <iostream>

using namespace std; // C++ para nao precisar digitar std no c�digo

int main(){
    setlocale(LC_ALL, "portuguese");//Fun��o para usar acentos;
    // Variaveis armazenam valores na memoria
    int a =10;
    // Ponteiros armazenam posi�oes de memoria
    int *ponteiro; // criar o ponteiro usa o "*" antes

    //Ponteiro recebe a posi�ao da mem�ria da variavel
    ponteiro = &a;

    cout << "\n valor de a " << a;
    *ponteiro = 40;
    cout << "\n valor de a " << a;
}

