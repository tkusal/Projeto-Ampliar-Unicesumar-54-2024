/*
    Crie um programa que leia dois números inteiros A e B e calcule A elevado à potência de B.
    Exemplo: Leu 5 e 3, vai calcular 5³.

    5*5*5
*/

#include <stdio.h>
//#include <math.h>

int main() {
    int n1, n2, result = 1;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &n2);

    //result = pow(n1, n2);

    for (int i = 1; i <= n2; i++) {
        result = result * n1;
    }

    printf("%d elevado a %d = %d", n1, n2, result);

    return 0;
}