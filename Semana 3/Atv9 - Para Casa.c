/*
    Crie um programa que leia dois números inteiros A e B e calcule A elevado à potência de B.
    Exemplo: Leu 5 e 3, vai calcular 5³.
*/

#include <stdio.h>

int main() {
    int numA, numB; 
    float result = 1; 

    printf("Digite um numero: ");
    scanf("%d", &numA);

    printf("Digite outro numero: ");
    scanf("%d", &numB);
    
    for (int i = 0; i < numB; i++)
    {
       result = result * numA;
    }
        printf("O resultado da potencia de %d ^ %d = %.2f", numA, numB, result);

    return 0;
}
