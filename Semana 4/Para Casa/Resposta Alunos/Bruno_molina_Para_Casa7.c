#include <stdio.h>
#include <math.h>

int main() {
    int numeros[6];
    int i, j, temp;

    
    printf("Digite 6 numeros inteiros:\n");
    for (i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    
    for (i = 0; i < 6 - 1; i++) {
        for (j = 0; j < 6 - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    
    printf("Numeros ordenados em ordem crescente: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
