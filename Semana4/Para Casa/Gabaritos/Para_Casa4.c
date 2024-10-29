/*
    Escreva um programa que receba uma frase e a escreva de trás pra frente.

    Exemplo:

    Frase: OLÁ PESSOAL DO AMPLIAR!
    Resultado: !RAILPMA OD LAOSSEP ÁLO
*/

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int comprimento;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    comprimento = strlen(frase);
    
    printf("Resultado: ");
    for (int i = comprimento - 1; i >= 0; i--) {
        printf("%c", frase[i]);
    }
    printf("\n");

    return 0;
}
