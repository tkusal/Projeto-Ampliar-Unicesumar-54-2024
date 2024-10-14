/*
    Faça um programa que leia um número inteiro e imprima o número com seus dígitos invertidos.
    Se o número inteiro for zero, deverá pedir ao usuário que entre com um valor diferente.
    Exemplo: 1234 vira 4321.
*/

#include <stdio.h>

int main() {
    int numi;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numi);

    while (numi == 0)
    {
        printf("Digite um numero diferente de 0: ");
        scanf("%d", &numi);
    }

    for (int i = numi; i > 0; i--)
    {
       printf("%d", i);
    }
    
    return 0;
}
