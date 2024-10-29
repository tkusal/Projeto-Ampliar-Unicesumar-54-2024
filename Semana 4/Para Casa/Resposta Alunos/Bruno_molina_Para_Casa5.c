#include <stdio.h>
#include <math.h>

int main() {
    int matriz[3][3];
    int a, b;
    int soma_diagonal = 0;

   
    printf("O numeros em uma matriz 3x3:");
    for (a = 0; a < 3; a++) {
        for (b = 0; b < 3; b++) {
            printf("Elemento [%d][%d]: ", a + 1, b + 1); 
            scanf("%d", &matriz[a][b]);
        }
    }

    
    for (a = 0; a < 3; a++) {
        soma_diagonal += matriz[a][a]; 
    }


    printf("A soma da diagonal: %d", soma_diagonal); 

    return 0;
}
