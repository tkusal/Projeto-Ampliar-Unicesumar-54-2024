#include <stdio.h>
#include <math.h>

int main() {
    int numeros[5];
    int i;
    float media;


    for (i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        media /= numeros[i]; 
    }

    media = media / 5;
  
    printf("A media dos numeros: %.2f", media); 

    return 0;
}

// por como soma 2 dois 