/*
    No programa abaixo, a saída deverá ser:

    "Aprovado", caso média maior ou igual que 8.
    "Recuperação", caso média entre 6 e 8
    "Reprovado", caso média menor que 6. 
*/

#include <stdio.h>

int main () {    
    float nota1, nota2, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 8.0) {
        printf("Aprovado! Média: %.2f\n", media);
    } else if (media >= 6.0) {
        printf ("Recuperação! Média: %.2f\n", media);
    } else {
        printf ("Reprovado! Média: %.2f\n", media);
    }

    return 0;
}