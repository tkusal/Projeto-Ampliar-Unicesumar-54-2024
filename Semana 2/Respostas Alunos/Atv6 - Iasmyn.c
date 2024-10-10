/*
    Escreva um programa em C que peça ao usuário o salário e o tempo de trabalho em anos.
    O programa deverá calcular um bônus de 5% sobre o salário se o tempo de trabalho for superior a 5 anos.
*/

#include <stdio.h>

int main()
{

    int temptrab;
    float salarioat, salcbonus, vbonus;

    printf("Digite o salario ganho: ");
    scanf("%f", &salarioat);

    printf("Digite o tempo de trabalho em anos: ");
    scanf("%d", &temptrab);

    if (temptrab > 5) 
    {
        vbonus = salarioat * 0.05;
        salcbonus = salarioat + vbonus;

        printf("Seu salario com bonus e de: %.2f", salcbonus);
    }
    else 
    {
        printf("Voce nao recebe bonus");
    }

        return 0;
}
