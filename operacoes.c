#include <stdio.h>
#include <stdlib.h>

void main () {
    //Definindo as Variaveis
    int a = 6, b = 4;
    // soma
    printf("\n %d + %d = %d.",a ,b ,a + b);
    //Subtra��o.
    printf("\n %d - %d = %d.",a ,b ,a - b);
    //Divis�o.
    printf("\n %d / %d = %d.",a ,b ,a / b);
    //Multiplica��o.
    printf("\n %d x %d = %d.",a ,b , a*b);
    //Resto da Divis�o
    printf("\n O resto da / de %d e %d = %d." ,a ,b ,a%b);
    // Valor Absoluto
    printf("\n O Valor abosluto de -3 = %d.", abs(-3));
    system("pause");
}
