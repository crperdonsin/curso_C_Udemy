#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
#include <string>
#include <iostream>

using namespace std; // C++ para nao precisar digitar std no código

        // Função Void ou vazia
void enfeites (){
    cout << "\n*-/-*/-*/-*/-*/-*/-*/-*/-*/-*/-*/-*/-*/\n";
}
int main(){

    enfeites(); //  Quando quiser repetir a função

    setlocale(LC_ALL, "portuguese");//Função para usar acentos;
    // Variaveis armazenam valores na memoria
    int a =10;
    // Ponteiros armazenam posiçoes de memoria
    int *ponteiro; // criar o ponteiro usa o "*" antes
    enfeites();
    //Ponteiro recebe a posiçao da memória da variavel
    ponteiro = &a;

    cout << "\n valor de a " << a;
    enfeites();
    *ponteiro = 40; // o "*" Aponta o conteudo para *
    cout << "\n valor de a " << a;
    enfeites();
}

