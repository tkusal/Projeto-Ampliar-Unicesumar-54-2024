#include <stdio.h>

int main() {

    int anoAtual;
    int anoNascimento;
    int idade;

    anoAtual = 2024;
    anoNascimento = 1990;
    idade = anoAtual - anoNascimento;

    printf("O monitor Thiago tem %d anos", idade);

    return 0;
}