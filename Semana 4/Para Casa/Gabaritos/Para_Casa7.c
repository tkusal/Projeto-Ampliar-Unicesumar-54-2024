/*
    Escreva um programa que receba 6 numeros inteiros aleatórios.
    O programa deverá ordernar os 6 números de forma crescente e escreve-los na tela.

    Exemplo:
    Entreda:  5 3 4 6 2 1
    Saída:    1 2 3 4 5 6
*/    

#include <stdio.h>

#define TAMANHO 6

int main() {
    int numeros[TAMANHO];
    int i, j, temp;

    printf("Digite 6 numeros inteiros: \n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    //Bubble Sort
    for (i = 0; i < TAMANHO - 1; i++) {
        for (j = 0; j < TAMANHO - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("Numeros ordenados: ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", numeros[i]);
    }
    
    printf("\n");
    return 0;
}
