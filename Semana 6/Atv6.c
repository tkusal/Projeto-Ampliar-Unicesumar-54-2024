/*
    Escreva um programa de controle de exames de pacientes. Deve ser constituído no seguinte menu:

    1. Cadastrar Paciente (Até 100)
    2. Cadastrar Exames (até 30)
    3. Cadastrar Resultados (até 100)
    4. Listar os Resultados de um paciente específico
    5. Listar Todos os Pacientes informando nome e quantidade de resultados
    5.Sair

    Paciente:
    - Nome
    - Idade
    - Código do Paciente
    - Qtd de Resultados

    Exame:
    - Código do exame
    - Tipo (sangue, fezes, imagem)
    - Descrição do Exame

    Resultado:
    - Código de um Paciente
    - Código de um Exame
    - Descrição do resultado
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_PACIENTES 100
#define MAX_EXAMES 30
#define MAX_RESULTADOS 100

typedef struct
{
    char nome[50];
    int idade;
    int codPaciente;
    int quantResultado;
} Paciente;

typedef struct
{
    int codeExame;
    int tipo; // Sangue, fezes , imagem
    char descricao[100];
} Exame;

typedef struct
{
    int codPaciente;
    int cod_exame;
    char descricao[100];
} Resultado;

int quantidadePaciente = 0, quantidadeExame = 0, quantidadeResultado = 0;
Paciente paciente[MAX_PACIENTES];
Exame exame[MAX_EXAMES];
Resultado resultado[MAX_RESULTADOS];

void cadastrarPaciente()
{

    if (quantidadePaciente < MAX_PACIENTES)
    {

        printf("\n---- Cadastrar Paciente ---\n");
        paciente[quantidadePaciente].codPaciente = quantidadePaciente + 1;
        printf("Codigo do paciente %d\n:", paciente[quantidadePaciente].codPaciente);

        printf("Digite seu nome");
        fgets(paciente[quantidadePaciente].nome, sizeof(paciente[quantidadePaciente].nome), stdin);
        paciente[quantidadePaciente].nome[strcspn(paciente[quantidadePaciente].nome, "\n")] = '\0';

        printf("Digite a idade: ");
        scanf("%d", &paciente[quantidadePaciente].idade);
        getchar();

        paciente[quantidadePaciente].quantResultado = 0;

        quantidadePaciente++;
    }
    else
    {
        printf("Numero total de pacientes cadastrados\n");
    }
}

void cadastrarExame()
{
    printf("\n--- Cadastrar Exames ---\n");
    if (quantidadeExame < MAX_EXAMES)
    {

        exame[quantidadeExame].codeExame = quantidadeExame + 1;
        printf("Codigo exame: %d\n", exame[quantidadeExame].codeExame);

        // Tipo (Sangue, Fezes, imagem)
        printf("Digite\n1. Sangue\n2. Fezes\n3. Imagem: \n");
        scanf("%d", &exame[quantidadeExame].tipo);
        getchar();

        printf("Digite a descricao do exame: ");
        fgets(exame[quantidadeExame].descricao, sizeof(exame[quantidadeExame].descricao), stdin);
        exame[quantidadeExame].descricao[strcspn(exame[quantidadeExame].descricao, "\n")] = '\0';

        quantidadeExame++;
    }
    else
    {
        printf("Numero total de exames cadastrados\n");
    }
}

int validarPaciente()
{
    for (int i = 0; i < quantidadePaciente; i++)
    {
        if (paciente[i].codPaciente == resultado[quantidadeResultado].codPaciente)
        {
            paciente[i].quantResultado += 1;
            return 1;
        }
        else
        {
            printf("Paciente nao encontrado\n");
            return 0;
        }
    }
}

int validarExame()
{

    for (int i = 0; i < quantidadeExame; i++)
    {
        if (exame[i].codeExame == resultado[quantidadeResultado].cod_exame)
        {
            return 1;
        }
        else
        {
            printf("Paciente nao encontrado\n");
            return 0;
        }
    }
}

void cadastrarResultados()
{
    if (quantidadeResultado < MAX_RESULTADOS)
    {
        int temp;
        do
        {
            printf("Digite o codigo do paciente: ");
            scanf("%d", &resultado[quantidadeResultado].codPaciente);
            getchar();
            temp = validarPaciente();
        } while (temp != 1);

        do
        {
            printf("Digite o codigo do exame: ");
            scanf("%d", &resultado[quantidadeResultado].cod_exame);
            getchar();
            temp = validarExame();
        } while (temp != 1);

        printf("Digite os sintomas do paciente: ");
        fgets(resultado[quantidadeResultado].descricao, sizeof(resultado[quantidadeResultado].descricao), stdin);
        resultado[quantidadeResultado].descricao[strcspn(resultado[quantidadeResultado].descricao, "\n")] = '\0';

        quantidadeResultado++;
    }
    else
    {
        printf("Numero total de resultados cadastrados\n");
    }
    quantidadeResultado++;
}

void listarPacienteEspec()
{
    int temp;
    printf("Digite o codigo do paciente: ");
    scanf("%d", &temp);

    for (int i = 0; i < quantidadePaciente; i++)
    {
        if (paciente[i].codPaciente == temp)
        {
            printf("\n---- Paciente %d ----\n", i + 1);
            printf("Nome do Paciente: %s\n", paciente[i].nome);
            printf("Idade do Paciente: %d\n", paciente[i].idade);
            printf("Codigo do Paciente: %d\n", paciente[i].codPaciente);
            printf("Quantidade Resultados: %d\n", paciente[i].quantResultado);
            printf("--------------------\n");
        }
        else
        {
            printf("Paciente nao encontrado!\n");
        }
    }
}

void listarPacientes()
{
    for (int i = 0; i < quantidadePaciente; i++)
    {
        printf("\n---- Paciente %d ----\n", i + 1);
        printf("Nome do Paciente: %s\n", paciente[i].nome);
        printf("Quantidade Resultados: %d\n", paciente[i].quantResultado);
        printf("--------------------\n");
    }
}

int main()
{
    int opcao;

    while (1)
    {
        printf("\n1. Cadastrar Paciente\n2. Cadastrar Exames\n3. Cadastrar Resultados\n4. Listar os Resultados de um Paciente Especifico\n5. Listar Todos os Pacientes\n6. Sair\nOpcao\n: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            cadastrarPaciente();
            break;
        case 2:
            cadastrarExame();
            break;
        case 3:
            cadastrarResultados();
            break;
        case 4:
            listarPacienteEspec();
            break;
        case 5:
            listarPacientes();
            break;
        case 6:
            printf("Encerrando programa...");
            return 0;
            break;

        default:
            break;
        }
    }
}