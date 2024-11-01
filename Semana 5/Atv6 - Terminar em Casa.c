/*
    Escreva um programa em C que apresente o seguinte menu:

    1. Cadastrar conta Bancária
    2. Realizar Depósito
    3. Realizar Saque (Se for conta corrente, deverá ter uma taxa de R$5,00)
    4. Listar todas as contas
    5. Exibir uma conta em específico exibindo a idade atual do titular ao invés do ano de nascimento
    6. Sair

    A conta bacária possui:
    - Número da Conta
    - Tipo de Conta (Poupança ou Conta-Corrente)
    - Saldo
    - Titular da conta

    O titular possui:
    - Nome
    - Ano de nascimento
    - CPF

    O programa só poderá ser encerrado quando o usuário escolher a opção de sair.
    O programa permitirá o cadastro de ATÉ 100 contas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX_CONTAS 100

typedef struct
{
    char nome[20];
    int ano;
    char cpf[15];

} CadastroTitular;

typedef struct
{
    int numConta;
    int tipoConta;
    float saldo;
    CadastroTitular titular;

} CadastroConta;

int main()
{
    int opcao, cont_conta = 0;
    CadastroConta cadastro[MAX_CONTAS];

    while (1)
    {
        printf("1. Cadastrar conta Bancária\n2. Realizar Depósito\n3. Realizar Saque\n4. Listar todas as contas\n5. Buscar uma Conta\n6. Sair");
        scanf("%d", &opcao);
        switch (opcao)
        {
            case 1:
                int aux;
                while(1){
                    bool test = true;                
                    printf("Informe o número da conta: ");
                    scanf("%d", &aux);
                    getchar();

                    for (int i = 0; i < cont_conta; i++)
                    {
                        if (aux == cadastro[i].numConta)
                        {
                            printf("Número já existente\n");
                            test = false;
                            break;
                        }
                    }    
                    if (test) {
                        break;
                    }
                }
                cadastro[cont_conta].numConta = aux;

                printf("\nEscolha o tipo de conta:\n1. Poupança\n2. Conta-Corrente\n: ");
                scanf("%d", &cadastro[cont_conta].tipoConta);
                getchar();

                printf("\nInforme o saldo da conta: ");
                scanf("%d", &cadastro[cont_conta].saldo);
                getchar();

                printf("\nNome do Titular da conta: ");
                fgets(cadastro[cont_conta].titular.nome, sizeof(cadastro[cont_conta].titular.nome), stdin);
                cadastro[cont_conta].titular.nome[strcspn(cadastro[cont_conta].titular.nome, "\n")] = '\0';

                printf("\nAno de Nascimento do Titular da conta: ");
                scanf("%d", cadastro[cont_conta].titular.ano);
                getchar();

                printf("\nCPF do Titular da conta (000.000.000-00): ");
                fgets(cadastro[cont_conta].titular.cpf, sizeof(cadastro[cont_conta].titular.cpf), stdin);
                cadastro[cont_conta].titular.cpf[strcspn(cadastro[cont_conta].titular.cpf, "\n")] = '\0';
                break;

                cont_conta++;

            case 2:
                int nConta;
                float vDeposito;
                printf("Digite o numero da conta: ");
                scanf("%d", &nConta);

                for (int i = 0; i < cont_conta; i++)
                {
                    if (nConta == cadastro[i].numConta)
                    {
                        printf("Digite o valor do deposito: ");
                        scanf("%f", &vDeposito);
                    } else {
                        printf("Conta inválida!!");
                    }
                }    
                    

                break;

            case 3:

                break;

            case 4:

                break;

            case 5:
                break;

            case 6:
                system("clear");
                printf("Encerrando...");
                return 0;
                break;

            default:
                printf("Inválido");
                break;
        }
            
    }
    
}