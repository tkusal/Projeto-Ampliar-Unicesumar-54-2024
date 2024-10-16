/*
    Faça um programa que leia um número inteiro e imprima o número com seus dígitos invertidos.
    Se o número inteiro for zero, deverá pedir ao usuário que entre com um valor diferente.
    Exemplo: 1234 vira 4321.
*/

#include <stdio.h>

int main() {
    int numa, invertido = 0;

   
    do {
        printf("Digite um numero inteiro diferente de zero: ");
        scanf("%d", &numa);
    } while (numa == 0); 

 
    while (numa != 0) {
        int digito = numa % 10; 
        invertido = invertido * 10 + digito; 
        numa /= 10; 
    }

    
    printf("Numero invertido: %d\n", invertido);

    return 0;
}
