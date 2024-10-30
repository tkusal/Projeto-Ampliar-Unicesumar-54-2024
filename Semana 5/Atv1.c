/*
    Escreva um programa que leia o nome de um aluno, a idade e 4 notas deste aluno.
    O programa deverá retornar a média dessas notas, o nome e idade do aluno.
    Crie uma struct Aluno.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[30];
    int idade;
    float notas[4];
    float media;
} Aluno;

int main() {
    Aluno aluno;

    printf("Informe o nome: ");
    scanf("%29s", aluno.nome);

    printf("Informe a idade: ");
    scanf("%d", &aluno.idade);

    for (int i = 0; i < 4; i++)
    {
        printf("Informe a nota %d: ", i+1);
        scanf("%f", &aluno.notas[i]);
        aluno.media += aluno.notas[i];
    }

    aluno.media /= 4;

    printf("Aluno: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Média: %.2f", aluno.media);
    
    return 0;
}