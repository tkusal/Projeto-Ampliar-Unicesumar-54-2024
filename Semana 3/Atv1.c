/*
    Escreva um programa em C, que receba a idade de 3 pessoas e informe
    qual é a pessoa mais velha.
*/

#include <stdio.h> //STabdarD Input Output . Hearder

int main()
{

    int pessoa1, pessoa2, pessoa3;

    printf("Informe a idade da pessoa 1: ");
    scanf("%d", &pessoa1);
    printf("Informe a idade da pessoa 2: ");
    scanf("%d", &pessoa2);
    printf("Informe a idade da pessoa 3: ");
    scanf("%d", &pessoa3);

    if (pessoa1 > pessoa2 && pessoa1 > pessoa3)
    {
        printf("A Pessoa 1 é mais velha, com %d anos.", pessoa1);
    }
    else if (pessoa2 > pessoa1 && pessoa2 > pessoa3)
    {
        printf("A Pessoa 2 é mais velha, com %d anos.", pessoa2);
    }
    else if (pessoa3 > pessoa1 && pessoa3 > pessoa2)
    {
        printf("A Pessoa 3 é mais velha, com %d anos.", pessoa3);
    }
    else
    {
        printf("Não há uma idade maior.");
    }

    return 0;
}