/*
    Converta o procesimento da Atv1 em uma função
*/

#include <stdio.h>


float Aumento_10_por_cento (float salario) {
    return salario + (salario*0.1);
}

int main () {   
    float salario;

    printf("Salario: ");
    scanf("%f", &salario);

    float novoSalario = Aumento_10_por_cento(salario);
    printf("Novo Salario: %.2f\n\n", novoSalario);

    printf("Novo Salario(2): %.2f", Aumento_10_por_cento(salario));

    return 0;
}