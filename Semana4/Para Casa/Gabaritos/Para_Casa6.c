/*
    Escreva um programa que receba 9 numeros em uma matrix 3x3.
    E escreva na tela a matriz transposta

    Exemplo:
    Matriz Inicial:
    3 1 1
    1 3 1
    1 1 3

    Matriz transposta (As linhas viram colunas):
    1 1 3
    1 3 1
    3 1 1
*/    

#include <stdio.h>

int main() {
    int matriz[3][3];
    int transposta[3][3];

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz Inicial:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
