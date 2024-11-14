#include <stdio.h>

void soma(int *result) {
    int a, b;
    scanf("%d %d", &a, &b);
    *result = a+b;
}

int main()
{   
    int resultado;   

    soma(&resultado);
    printf("Resultado = %d", resultado);

    return 0;
}