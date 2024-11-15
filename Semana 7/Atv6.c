/*
    Escreva um código que calcule o fatorial de um numero utilizando função recursiva
    5 * 4 * 3 *2 *1
*/

#include <stdio.h>

int calcFatorial (int num) {
    if (num <= 1) {
        return 1;
    } else {
        return num * calcFatorial(num - 1);
    }
}

int main()
{
    int numero = 5;
    int fatorial;

    fatorial = calcFatorial(numero);

    printf("%d", fatorial);

    return 0;
}
