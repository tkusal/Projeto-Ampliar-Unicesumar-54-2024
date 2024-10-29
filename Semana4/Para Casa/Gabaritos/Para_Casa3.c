/*
    Escreva um programa receba 5 numeros e calcule a média de todos os números.
*/

#include <stdio.h>

#define qtdNumeros 5

int main() {
    float numeros[qtdNumeros];
    float soma = 0.0;
    float media;

    printf("Digite %d números:\n", qtdNumeros);
    for (int i = 0; i < qtdNumeros; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 5;

    printf("A média dos números é: %.2f\n", media);

    return 0;
}
