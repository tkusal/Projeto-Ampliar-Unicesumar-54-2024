/*
    Escreva um programa que permita:

    1. Cadastrar um Funcionario
    2. Calcular o IRPF desse funcionário
    3. Sair

    - Funcionario:
        - Nome
        - Idade
        - Salario

    IRPF = 20%

    O programa deve permitir cadastrar até 3 funcionários.
    Seguimente o código em subrotinas e utilize ponteiro onde julgar adequado.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[30];
    int idade;
    float salario;
} Funcionario;

#define QTDMAX 3

void cadastrarFuncionario(Funcionario *pointer)
{
    printf("Nome do Funcionario: ");
    fgets(pointer->nome, sizeof(pointer->nome), stdin);
    pointer->nome[strcspn(pointer->nome, "\n")] = '\0';

    printf("Idade Funcionario: ");
    scanf("%d", &pointer->idade);
    getchar();

    printf("Digite seu salario ai: ");
    scanf("%f", &pointer->salario);
    getchar();
}

void calcularIRPF(Funcionario *funcionario)
{

    float IRPF = funcionario->salario * 0.20;

    printf("Nome do funcionario: %s\n", funcionario->nome);
    printf("imposto: %.2f", IRPF);
}

int main()
{
    int opcao, QTDF = 0;
    Funcionario funcionario[QTDMAX];

    while (1)
    {
        printf("1. Cadastrar funcionario\n2. Calcular IRPF\n3. Sair\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            if (QTDF < QTDMAX)
            {
                cadastrarFuncionario(&funcionario[QTDF]);
                QTDF++;
            }
            else
            {
                printf("Limite maximo de funcionarios antigido!");
            }
            break;
        case 2:
            for (int i = 0; i < QTDF; i++)
            {
                calcularIRPF(&funcionario[i]);
            }
            break;
        case 3:
            printf("Encerrando programa...");
            return 0;
            break;
        }
    }
}