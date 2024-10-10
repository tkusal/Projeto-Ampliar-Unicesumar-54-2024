/*
    Escreva um programa em C que peça ao usuário o salário
    e o tempo de trabalho em anos.
    O programa deverá calcular um bônus de 5% sobre o salário
    se o tempo de trabalho for superior a 5 anos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float salario, aumento;
int anos;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("clear");

    printf("Digite seu salário:\n");
    scanf("%f", &salario);
    getchar();

    printf("Digite seu tempo de trabalho em anos:\n");
    scanf("%d", &anos);
    getchar();

    if (anos > 5)
    {
        aumento = (salario * 0.05) + salario;

        printf("Você teve um aumento de 5%%\n");
        printf("Seu salário agora é %.2f e você trabalha a %d anos na nossa empresa", aumento, anos);
    }
    else
    {
        printf("Seu salário é %.2f e você trabalha a %d anos na nossa empresa", salario, anos);
    }

    return 0;
}
