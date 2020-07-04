#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
#include <string>
#include <iostream>

using namespace std; // C++ para nao precisar digitar std no código

int main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    // Variaveis armazenam valores na memoria
    int a =10;
    // Ponteiros armazenam posiçoes de memoria
    int *ponteiro; // criar o ponteiro usa o "*" antes

    //Ponteiro recebe a posiçao da memória da variavel
    ponteiro = &a;

    cout << "\n valor de a " << a;
    *ponteiro = 40;
    cout << "\n valor de a " << a;
}

