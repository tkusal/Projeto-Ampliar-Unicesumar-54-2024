/*
    Escreva uma "calculadora" que faça as 4 operações aritméticas.
    O usuário deverá escolher qual operação quer fazer e fornecer 2 números.
    Cada operação deverá ser uma sub-rotina.
*/

#include <stdio.h>
#include <stdlib.h>

int Entrada (char palavra[]) {
    int n;
    printf("Informe o %s número: ", palavra);
    scanf("%d", &n);
    system("clear");
    return n;
}

int Soma () {
    int n1 = Entrada("primeiro");
    int n2 = Entrada("segundo");    
    return n1+n2;
}

int Subtracao () {
    int n1 = Entrada("primeiro");
    int n2 = Entrada("segundo");    
    return n1-n2;
}

void Saida(int n){
    printf("Resultado = %d\n", n);
}

void Multiplicacao () {
    int n1 = Entrada("primeiro");
    int n2 = Entrada("segundo");    
    Saida(n1*n2);
}

void Divisao () {
    int n1 = Entrada("primeiro");
    int n2 = Entrada("segundo");    
    Saida(n1/n2);
}

int main() {
    int result, opcao;

    do {
        printf("Escolha a operação que deseja realizar:\n"); 
        printf("1. Soma\n2. Subtração\n3. Divisão\n4. Multiplicação\n5. Sair\n");
        scanf("%d", &opcao);
        system("clear"); 
    
        switch (opcao) {
            case 1:
                result = Soma();
                printf("Resultado = %d\n", result);
                break;
            case 2:            
                printf("Resultado = %d\n", Subtracao());
                break;
            case 3:
                Divisao();
                break;
            case 4:
                Multiplicacao();
                break;
            case 5:
                return 0;
                break;    
            default:
                printf("Operação inválida\n"); 
                break;                
        }

    }while(1);
}