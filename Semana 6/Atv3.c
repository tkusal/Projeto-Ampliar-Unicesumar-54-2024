/*
    Escreva um programa em C, que receba o salario de uma pessoa e calcule um aumento de 10%.
    O calculo deverá ser feito em uma sub-rotina de PROCEDIMENTO usando variável global
*/

#include <stdio.h>

float salario;

void Aumento_10_por_cento () {
    salario += (salario*0.1);
    printf("Novo salário: %.2f", salario);
}

int main () {

    printf("Salario: ");
    scanf("%f", &salario);

    Aumento_10_por_cento();

    return 0;
}