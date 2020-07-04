#include <stdio.h>//Biblioteca de entrada e saída;
#include <stdlib.h>//Biblioteca de operações matematicas;
#include <locale.h>//Para usar acentos;
#include <string>
#include <iostream>

using namespace std; // C++ para nao precisar digitar std no código

int main(){
    setlocale(LC_ALL, "portuguese");//Função para usar acentos;

    // Criando uma matriz
    int matriz [2][2], i, j, a, b, c, d;

    // Inserindo indices
    matriz [0][0] = 1;
    matriz [0][1] = 2;
    matriz [1][0] = 3;
    matriz [1][1] = 4;

    //imprimindo as
    for(i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            cout << "\n i =" << i << ", j = " << j; //printf em c++

    }
        }
        cout << "\n************************************** \n";

    // Imprimindo os Valores
    for(i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
                cout << matriz [i][j] << " ";
        }
    cout <<"\n";
    }
    cout << "\n************************************** \n";
    // Operaçoes Matematicas com os valores
   for(i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
                cout << matriz [i][j] * 3 << " ";
        }
    cout <<"\n";
   }
    cout << "\n*****Digite Quatro Valores********** \n";

       for(i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
               cin >> matriz[i][j]; // scanf em c++
        }
    }
    cout << "\n*********Você Digitou************* \n";
     for(i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
                cout << matriz [i][j] << " ";
        }
    cout <<"\n";
    }
    cout << "#####################################\n";
    //invertendo linhas da matriz
    a = matriz [0][0];
    b = matriz [0][1];
    c = matriz [1][0];
    d = matriz [1][1];
    cout << c << d << "\n";
    cout << a << b << "\n";

        system("pause");
}
