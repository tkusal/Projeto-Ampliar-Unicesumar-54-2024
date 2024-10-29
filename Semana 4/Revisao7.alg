Algoritmo "Revisão 7"
//Refazendo Atv10 semana 3 em portugol

Var
   opcao : inteiro
   n1 : inteiro
   n2 : inteiro
   result : inteiro

Inicio

    repita
        escreval("Escolha uma opção:")
        escreval("1. Somar")
        escreval("2. Multiplicar")
        escreval("3. Encerrar")
        leia(opcao)
        
        escolha opcao
                caso 1
                     escreva("Informe o primeiro numero:")
                     leia(n1)
                     escreva("Informe o segundo numero:")
                     leia(n2)
                
                     result <- n1 + n2
                     escreval("Resultado = ", result)
                caso 2
                     escreva("Informe o primeiro numero:")
                     leia(n1)
                     escreva("Informe o segundo numero:")
                     leia(n2)
                
                     result <- n1 * n2
                     escreval("Resultado = ", result)
                caso 3
                     escreval("Encerrando...")
                outrocaso
                     escreva("Opção Inválida")
        fimescolha
        
    ate opcao = 3

      
Fimalgoritmo