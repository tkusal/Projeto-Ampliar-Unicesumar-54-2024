/*
    Crie um programa que leia dois números inteiros A e B e calcule A elevado à potência de B.
    Exemplo: Leu 5 e 3, vai calcular 5³.
*/

#include <stdio.h>

int main() {
    int A, B;
    long resultado = 1;


    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);

 
    for(int i = 0; i < B; i++) {
        resultado *= A;
    }


    printf("%d elevado à potência de %d é: %ld\n", A, B, resultado);

    return 0;
}
