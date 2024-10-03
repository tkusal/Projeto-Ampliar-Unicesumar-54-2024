/*
    Escreva um programa em C que converta temperatura de Celsius para Fahrenheit.

    F = C*1,8 + 32
*/

#include <stdio.h>

int main()
{
    float tempInicial, tempConvertida;

    printf("Informe o valor da temperatura em Celsius: ");
    scanf("%f", &tempInicial);

    tempConvertida = tempInicial * 1.8 + 32;

    printf("A temperatura em fahrenheit é dê %.2f", tempConvertida);

    return 0;
}