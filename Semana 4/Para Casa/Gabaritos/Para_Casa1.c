/*
    Escreva um programa em C que receba a idade de 10 pessoas e diga qual a mais nova e qual a mais velha.
*/

#include <stdio.h>

int main() {
    int idades[10];
    int maisNova, maisVelha;

    for (int i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    maisNova = idades[0];
    maisVelha = idades[0];

    for (int i = 1; i < 10; i++) {
        if (idades[i] < maisNova) {
            maisNova = idades[i];
        }
        if (idades[i] > maisVelha) {
            maisVelha = idades[i];
        }
    }
    printf("A pessoa mais nova tem %d anos.\n", maisNova);
    printf("A pessoa mais velha tem %d anos.\n", maisVelha);

    return 0;
}
