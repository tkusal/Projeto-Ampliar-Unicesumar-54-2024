#include <stdio.h>

int main() {

    int idade = 10;
    int *ponteiroDaIdade;

    ponteiroDaIdade = &idade;

    printf("Valor de Idade: %d\n", idade);
    printf("---------------\n");
    *ponteiroDaIdade = 50;
    printf("Valor de Idade: %d\n", idade);
    printf("---------------\n");
    idade = 40;
    printf("Valor de *ponteiroDaIdade: %d\n", *ponteiroDaIdade);

    return 0;
}