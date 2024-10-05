/*
    Escreva um programa em C que peça ao usuário o salário e o tempo de trabalho em anos.
    O programa deverá calcular um bônus de 5% sobre o salário se o tempo de trabalho for superior a 5 anos.
    Entrada = Pedir ao usuario o salario que ele recebe atualmente e o trabalho em anos.
    processamento = calcular um bônus de 5% caso a pessoa trabalhe mais que 5 anos.
    saida = mostrar o resultado

*/

#include <stdio.h>

int main(){

    float salario, bonus;
    int anosTrabalhados;
    
    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Digite quantos anos voce trabalha na empresa: ");
    scanf("%d",&anosTrabalhados);

    if(anosTrabalhados > 5){
      bonus = 0.05;
      salario += salario  * bonus; 
      printf("Salario com bonus:  %.2f", salario);
    } else {
      printf("Seu salario atual: %.2f ", salario);
    }

  return 0;
}