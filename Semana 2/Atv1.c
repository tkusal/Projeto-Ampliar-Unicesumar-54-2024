#include <stdio.h>

int main () {
    
    int idade;
    float salario;
    char sexo;
    /*
    idade = 33;
    salario = 10.00;
    sexo = 'M';
    */
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    getchar();

    printf("Informe seu salario: ");
    scanf("%f", &salario);
    getchar();

    printf("Informe M para masculino e F para feminino.");
    scanf("%c", &sexo);
    getchar();

    printf("Tenho %d anos, recebo R$%.2f por mês e sou do sexo %c", idade, salario, sexo);

    return 0;
}