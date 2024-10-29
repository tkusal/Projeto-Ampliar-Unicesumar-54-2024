/*
    Escreva um programa que receba 9 numeros em uma matrix 3x3.
    E escreva na tela a soma de sua diagnonal.

    Exemplo:

    3 1 1
    1 3 1
    1 1 3

    3+3+3 = 9
*/    

#include <stdio.h>

int main() {
    int matriz[3][3];
    int somaDiagonal;

    printf("Digite os valores inteiros da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Variável [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == j) {
                somaDiagonal += matriz[i][i];
            }
        }
    }

    printf("\nMatriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma da diagonal principal: %d\n", somaDiagonal);

    return 0;
}