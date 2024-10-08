/*
    Escreva um programa em C que peça ao usuário o salário e o tempo de trabalho em anos.
    O programa deverá calcular um bônus de 5% sobre o salário se o tempo de trabalho for superior a 5 anos.
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float salario;
    int tempoTrabalho;
    float bonus = 0.05;
    float soma;

        printf("Insira o salario: ");
        scanf("%f", &salario);

        printf("Quantos anos de trabalho?: ");
        scanf("%d", &tempoTrabalho);

            //soma
            soma = salario * bonus;

            if (tempoTrabalho > 5 )
            {
                printf ("VOCE CONSEGUIU O BONUS, SEU SALARIO FOI PARA: %.2f",salario + soma);
            }
            else 
            { 
                printf ("VOCE NAO CONSEGUIU O BONUS, SEU SALARIO CONTINUA:  %.2f", salario);
            }
            
    return 0;
}
