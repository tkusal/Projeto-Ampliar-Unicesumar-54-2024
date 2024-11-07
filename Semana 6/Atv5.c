/*
    Escreva um programa que cadastre 3 alunos.
    Cada aluno possui, nome, média e idade.
    O programa deve permitir:

    1. Cadastrar Aluno
    2. Listar alunos
    3. Exibir aluno com maior média
    4. Exibir aluno mais velho
    5. Sair

    Separe as tarefas em subrotinas!
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ALUNOS 3

typedef struct
{
    char nome[50];
    int idade;
    float media;
} Estudante;

void maioridade(Estudante aluno[MAX_ALUNOS])
{
    int maiorIdade = 0;
    int indice;

    for (int i = 0; i < MAX_ALUNOS; i++)
    {
        if (aluno[i].idade > maiorIdade)
        {
            maiorIdade = aluno[i].idade;
            indice = i;
        }
    }
    printf("O aluno mais velho é : %s ", aluno[indice].nome);
}

void maiorMedia(Estudante aluno[MAX_ALUNOS])
{
    int maiorMedia = 0;
    int indice;

    for (int i = 0; i < MAX_ALUNOS; i++)
    {
        if (aluno[i].media > maiorMedia)
        {
            maiorMedia = aluno[i].media;
            indice = i;
        }
    }
    printf("O aluno com a maior média é : %s ", aluno[indice].nome);
}

void listarAlunos(Estudante aluno[MAX_ALUNOS])
{
    for (int i = 0; i < MAX_ALUNOS; i++)
    {
        printf("Nome do aluno: %s\n", aluno[i].nome);
        printf("Idade do aluno: %d\n", aluno[i].idade);
        printf("Média do aluno: %.1f\n", aluno[i].media);
        printf("-----------------------------------------\n");
    }
}

Estudante cadastroAluno()
{

    Estudante cadastro;
    printf("Informe o nome do aluno: ");
    fgets(cadastro.nome, sizeof(cadastro.nome), stdin);
    cadastro.nome[strcspn(cadastro.nome, "\n")] = '\0';

    printf("Informe a idade: ");
    scanf("%d", &cadastro.idade);
    getchar();

    printf("Informe a média: ");
    scanf("%f", &cadastro.media);
    getchar();

    return cadastro;
}

int main()
{

    int opcao;
    Estudante aluno[MAX_ALUNOS];

    while (1)
    {
        printf("\n1. Cadastrar Aluno\n2. Listar alunos\n3. Exibir aluno com maior média\n4. Exibir aluno mais velho\n5. Sair\nOpção: ");
        scanf("%d", &opcao);
        getchar();
        system("clear");

        switch (opcao)
        {

        case 1:

            for (int i = 0; i < MAX_ALUNOS; i++)
            {
                aluno[i] = cadastroAluno();
            }
            break;

        case 2:
            listarAlunos(aluno);
            break;

        case 3:
            maiorMedia(aluno);
            break;

        case 4:
            maioridade(aluno);
            break;

        case 5:
            printf("Encerrando...");
            return 0;
            break;

        default:
            printf("Opção inválida");
            break;
        }
    }
}
