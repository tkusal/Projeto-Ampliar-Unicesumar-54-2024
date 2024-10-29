Algoritmo "Revisão 6"
//Refazendo Atv9 semana 3 em portugol

Var
   num1 : inteiro
   num2 : inteiro
   result :inteiro
   i : inteiro

Inicio

      escreva("Informe o primeiro numero")
      leia(num1)
      escreva("Informe o segundo numero")
      leia(num2)

      result <- 1
      
      para i de 1 ate num2 passo 1 faca
           result <- result * num1
      fimpara
      
      escreva(num1, " elevado a ", num2, " = ", result)
      
Fimalgoritmo