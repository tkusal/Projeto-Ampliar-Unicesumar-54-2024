/*
    Faça um programa em C que escreva em ordem decrescente todos os anos pares
    entre 2024 e 1990.
*/

#include <stdio.h>

int main() {

    int ano = 2023;
    while (ano > 1990) {
        if (ano%2 == 0) {
            printf("%d\n", ano);            
        }
        ano--;     
    }

    /*
    for(int ano = 2024; ano > 1990; ano--) {
        if (ano%2 == 0) {
            printf("%d\n", ano);
        }
    }
    */

    return 0;
}