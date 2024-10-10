/*
    Escreva um programa em C que peça ao usuário o salário e o tempo de trabalho em anos.
    O programa deverá calcular um bônus de 5% sobre o salário se o tempo de trabalho for superior a 5 anos.
*/

#include <stdio.h>

int main(){

    float sal, sal1, resultado;
    int temp;

    printf("Digite seu salário: ");
    scanf("%f", &sal);

    printf("Digite em anos o seu tempo de trabalho: ");
    scanf("%d", &temp);

   if(temp > 5){

      sal1 = sal;
      sal1 = sal *0.05;
      resultado = sal + sal1;  
      printf("Seu bônus salarial é: R$ %.2f\nSeu salário atual é: R$ %.2f",sal1, resultado); 

    }
    else{

        printf("Você não possui acrescimo salárial,\nSalário atual: R$ %.2f", sal);
        
    }

    return 0;
}