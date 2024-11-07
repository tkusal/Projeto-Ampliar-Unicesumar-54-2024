/*
    Escreva um programa em C, que receba o salario de uma pessoa e calcule um aumento de 10%.
    O calculo deverá ser feito em uma sub-rotina de PROCEDIMENTO
*/

#include <stdio.h>

void Aumento_10_por_cento(float salario);

int main()
{
    float salario;

    printf("Salario: ");
    scanf("%f", &salario);
    getchar();

    Aumento_10_por_cento(salario);

    return 0;
}

void Aumento_10_por_cento(float salario)
{
    salario += (salario * 0.1);
    printf("Novo salário: %.2f\n\n", salario);
}