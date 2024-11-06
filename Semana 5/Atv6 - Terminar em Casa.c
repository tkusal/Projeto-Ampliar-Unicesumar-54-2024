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
    int opcao, cont_conta = 0, nConta, aux;
    bool test, saque;
    CadastroConta cadastro[MAX_CONTAS];

    while (1)
    {
        printf("1. Cadastrar conta Bancária\n2. Realizar Depósito\n3. Realizar Saque\n4. Listar todas as contas\n5. Buscar uma Conta\n6. Sair\n");
        scanf("%d", &opcao);
        getchar();
        switch (opcao)
        {
        case 1:
            
            while (1)
            {
                test = true;
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
                if (test)
                {
                    break;
                }
            }
            cadastro[cont_conta].numConta = aux;

            do{
                printf("\nEscolha o tipo de conta:\n1. Poupança\n2. Conta-Corrente\n: ");
                scanf("%d", &cadastro[cont_conta].tipoConta);                
                getchar();
                if (cadastro[cont_conta].tipoConta == 1) {
                    printf("Conta poupança\n");
                    break;
                } else if (cadastro[cont_conta].tipoConta == 2) {
                    printf("Conta-Corrente\n");
                    break;
                } else {
                    printf("Opção Inválida.");
                }
            } while (1);    

            printf("\nInforme o saldo da conta: ");
            scanf("%f", &cadastro[cont_conta].saldo);
            getchar();

            printf("\nNome do Titular da conta: ");
            fgets(cadastro[cont_conta].titular.nome, sizeof(cadastro[cont_conta].titular.nome), stdin);
            cadastro[cont_conta].titular.nome[strcspn(cadastro[cont_conta].titular.nome, "\n")] = '\0';

            printf("\nAno de Nascimento do Titular da conta: ");
            scanf("%d", &cadastro[cont_conta].titular.ano);
            getchar();

            printf("\nCPF do Titular da conta (000.000.000-00): ");
            fgets(cadastro[cont_conta].titular.cpf, sizeof(cadastro[cont_conta].titular.cpf), stdin);
            cadastro[cont_conta].titular.cpf[strcspn(cadastro[cont_conta].titular.cpf, "\n")] = '\0';
            cont_conta++;
            break;
        case 2:
            test = false;
            float vDeposito;
            printf("Digite o numero da conta: ");
            scanf("%d", &nConta);
            getchar();
            for (int i = 0; i < cont_conta; i++)
            {
                if (nConta == cadastro[i].numConta)
                {
                    printf("Digite o valor do deposito: ");
                    scanf("%f", &vDeposito);
                    getchar();
                    test = true;
                    if (vDeposito > 0)
                    {
                        cadastro[i].saldo += vDeposito;
                        printf("Depósito realizado.\n");
                        printf("Seu saldo atual é de: R$%.2f\n", cadastro[i].saldo);
                    }
                    else
                    {
                        printf("Valor inválido\n");
                    }
                    break;
                }
            }
            if (!test)
            {
                printf("Número da conta não foi encontrado\n");
            }

            break;

        case 3:
            // Se for conta corrente, deverá ter uma taxa de R$5,00
            test = false;
            saque = false;

            printf("Digite o numero da conta de onde deseja sacar: ");
            scanf("%d", &nConta);
            getchar();
            for (int i = 0; i < cont_conta; i++)
            {
                if (nConta == cadastro[i].numConta)
                {   
                    float vSaque;
                    test = true;
                    printf("Informe qual valor deseja sacar: ");
                    scanf("%f", &vSaque);
                    if (vSaque > 0) {
                        if (cadastro[i].tipoConta == 1) {
                            if (cadastro[i].saldo >= vSaque) {
                                cadastro[i].saldo -= vSaque;
                                saque = true;
                            } else {
                                printf("Saldo insuficiente.\n");
                                printf("Seu saldo atual é de: R$%.2f\n", cadastro[i].saldo);
                            }
                        } else {
                            if (cadastro[i].saldo >= vSaque + 5.0) {
                                cadastro[i].saldo -= (vSaque + 5.0);
                                saque = true;
                            } else {
                                printf("Saldo insuficiente.\n");
                                printf("Seu saldo atual é de: R$%.2f\n", cadastro[i].saldo);
                            }                           
                        }

                        if (saque == true) {
                            printf("Saque realizado.\n");
                            printf("Seu saldo atual é de: R$%.2f\n", cadastro[i].saldo);
                        }                        
                    } else {
                        printf("Valor Inválido\n");
                    }    
                }
            }
            if (!test)
            {
                printf("Número da conta não foi encontrado\n");
            }
            break;

        case 4:
            printf("\n - Relação de contas - \n");
            for (int i = 0; i < cont_conta; i++)
            {
                printf("Número da conta: %d\n", cadastro[i].numConta);
                printf("Tipo de conta: %s\n", cadastro[i].tipoConta == 1 ? "Poupança" : "Conta-Corrente");
                printf("Saldo: R$%.2f\n", cadastro[i].saldo);
                printf("Nome Titular: %s\n", cadastro[i].titular.nome);
                printf("----------------------------------\n");
            }
            break;

        case 5:
            test = false;

            printf("Digite o numero da conta que deseja localizar: ");
            scanf("%d", &nConta);
            getchar();
            for (int i = 0; i < cont_conta; i++)
            {
                if (nConta == cadastro[i].numConta)
                {
                    test = true;
                    time_t t = time(NULL);
                    struct tm tm = *localtime(&t);
                    int anoAtual = tm.tm_year + 1900;
                    int idade = anoAtual - cadastro[i].titular.ano;
                    printf("Número da conta: %d\n", cadastro[i].numConta);
                    printf("Tipo de conta: %s\n", cadastro[i].tipoConta == 1 ? "Poupança" : "Conta-Corrente");
                    printf("Saldo: R$%.2f\n", cadastro[i].saldo);
                    printf("Nome Titular: %s\n", cadastro[i].titular.nome);
                    printf("Idade: %d\n", idade);
                    printf("CPF: %s\n", cadastro[i].titular.cpf);
                    printf("----------------------------------\n");
                }
            }
            if (!test)
            {
                printf("Número da conta não foi encontrado\n");
            }
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