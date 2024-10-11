/*
    Escreva um programa que receba um número e calcule o fatorial deste número.
    Exemplo: Fartorial de 5  = 5*4*3*2*1
*/

#include <stdio.h>

int main() {
    int fatorial;

    printf("Informe um número: ");
    scanf("%d", &fatorial);

    for(int i = fatorial-1; i > 0; i--) {
        fatorial = fatorial * i;
    }

    printf("%d", fatorial);

    return 0;
}