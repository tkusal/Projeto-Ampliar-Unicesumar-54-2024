/*
    Escreva um programa em C que peça ao usuário o salário e o tempo de trabalho em anos.
    O programa deverá calcular um bônus de 5% sobre o salário se o tempo de trabalho for 
    superior a 5 anos.
*/

#include <stdio.h>

int main() {
    float salario_folha, bonus = 0.0;
    int tempo_de_trabalho;

    // Solicita o salário e o tempo de trabalho
    printf("Digite folha de salario: ");
    scanf("%f", &salario_folha);
    printf("Digite o tempo de trabalho em anos: ");
    scanf("%d", &tempo_de_trabalho);

    // o tempo de trabalho é superior a 5 anos
    if (tempo_de_trabalho > 5) {
        // Calcula o bônus de 5%
        bonus = salario_folha * 0.05;
    }

    // resultado !!!
    printf("Bonus: %.1f\n", bonus);
    printf("Salario final: %.1f\n", salario_folha + bonus);
   
    return 0;
}



