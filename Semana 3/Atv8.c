/*
    Escreva um programa que receba 2 números inteiros
    e some todos os números ímpares existentes entre estes 2 números.
*/

#include <stdio.h>

int main()
{
    int numero1, numero2, somaImpares = 0;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Informe o segundo numero: ");
    scanf("%d", &numero2);

    if (numero1 > numero2)
    {
        int aux = numero1;
        numero1 = numero2;
        numero2 = aux;
    }
    else if (numero1 == numero2)
    {
        printf("Ambos os numeros são iguais e não há como calcular os ímpares entre eles");
        return 1;
    }

    for (int i = numero1+1; i < numero2; i++)
    {
        if (i%2 != 0) {
            somaImpares = somaImpares + i;
        }
    }

    printf("A soma dos ímpares é %d", somaImpares);

    return 0;
}