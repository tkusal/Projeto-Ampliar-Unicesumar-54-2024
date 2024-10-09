/*
    Escreva um programa em C que peça ao usuário o salário e o tempo de trabalho em anos.
    O programa deverá calcular um bônus de 5% sobre o salário se o tempo de trabalho for superior a 5 anos.

    salario * 0,05
*/

#include <stdio.h>

int main() {

    float salario, bonus;
    int anosTrabalhados;

    printf("Informe o salário: ");
    scanf("%f", &salario);

    printf("Informe quantos anos de trabalho você tem: ");
    scanf("%d", &anosTrabalhados);

    if(anosTrabalhados > 5) {
        //printf("Seu salário aumentou R$%f \nNovo salário: R$%f", salario*0.05, salario*0.05+salario);

        /*
        salario += salario * 0.05
        Que é o mesmo que salario = salario * 0.05 + salario
        */

       bonus = salario * 0.05;
       salario = salario + bonus;  //Que é o mesmo que salario += bonus;

       printf("Seu salário aumentou R$%.2f \nNovo salário: R$%.2f", bonus, salario);
    } else {
        printf("Você não teve bonus salarial pois ainda não possui mais de 5 anos de trabalho.");
    }

    return 0;
}