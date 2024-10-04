/*
    Escreva um programa em C, que receba a idade de uma pessoa.
    Se essa pessoa tiver 18 anos, ela é um adulto.
    Se ela tiver 15, é adolescente.
    Se tiver 8, é criança.
*/

#include <stdio.h>

int main()
{
    int idade;

    printf("Informe a idade ");
    scanf("%d", &idade);

    switch(idade) {
        case 18:
            printf("adulto\n");            
            break;        
        case 15:
            printf("adolescente\n");
            break;        
        case 8:
            printf("criança\n");
            break;
        default:
            printf("Idade inválida.");
            break;
    }

    return 0;
}