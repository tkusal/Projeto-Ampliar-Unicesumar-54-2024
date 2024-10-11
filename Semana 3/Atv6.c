/*
    Escreva um programa que receba um número inteiro
    e calcule a tabuada de 0 a 10 deste número.
*/

#include <stdio.h>

int main() {
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    for (int i = 0; i <= 10; i++) {
        printf("%d * %d = %d \n", numero, i, numero*i);        
    }

    return 0;
}