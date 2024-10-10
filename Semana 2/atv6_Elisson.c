/*
    Escreva um programa em C que peça ao usuário o salário e o tempo de trabalho em anos.
    O programa deverá calcular um bônus de 5% sobre o salário se o tempo de trabalho for superior a 5 anos.
*/

#include <stdio.h>
int main(){
    float salario;
    int TempoDeTrabalho;

    printf("Insira o seu salario: ");
    scanf("%f" ,&salario);

    printf("Quantos anos trabalhando? ");
    scanf("%d", &TempoDeTrabalho);

    if(TempoDeTrabalho > 5){
        salario = salario * 1.05;
        printf("Paraens voce ganhou o bonus, seu salario aumentou para: %.2f", salario);
    }else{
        printf("Infelizmente voce nao atingiu o requisitos para ganhar o bonus");
    }
    

}