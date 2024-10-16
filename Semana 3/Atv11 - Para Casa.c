/*
    Faça um programa que leia um número inteiro e imprima o número com seus dígitos invertidos.
    Se o número inteiro for zero, deverá pedir ao usuário que entre com um valor diferente.
    Exemplo: 1234 vira 4321.
*/

#include <stdio.h>

int main() {
    int num1, resto, invertido = 0;

    do {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num1);

        if (num1 == 0) {
            printf("Informe um valor diferente de zero.");
        }
    } while (num1 == 0);

    while (num1 != 0) {
        resto = num1 % 10;   //Divide "num1" por 10 e armazena o resto da divisão na variável "resto". Exemplo: 1234 / 10 = 123, resto 4
        invertido = invertido * 10 + resto; // variavel "invertido" recebe ela mesma multiplicado por 10 e o resultado soma com a variavel resto
        num1 /= 10; //Divide "num1" por 10, eliminando o ultimo digito pois se trata de numeros inteiros e não possui virgula. Exemplo: 1234/10 = 123.
    }

    printf("%d", invertido);

    return 0;
}