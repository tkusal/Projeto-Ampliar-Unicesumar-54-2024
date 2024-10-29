#include <stdio.h>
#include <math.h>

int main() {
    int i, j, matriz[3][3];


    printf("Digite os elementos da matriz 3x3:");
    

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }


    printf("Matriz 3x3:");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }

    }

    return 0;
}
