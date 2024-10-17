Algoritmo "Revisão 4"
//Refazendo Atv4 semana 2 em portugol

Var
   nota1 : real
   nota2 : real
   media : real
Inicio

    escreva("Informe a primeira nota: ")
    leia(nota1)      
    escreva("Informe a segunda nota: ")
    leia(nota2)
      
    media <- (nota1 + nota2) /2
      
      //>= 8 = aprovado
      //>= 6 = recuperação
      //<  6 = reprovado
      
    se media >= 8 entao
        escreva("Aprovado!")
    senao
        se media >= 6 entao
            escreva("Em recuperação")
    senao
        escreva("Reprovado")
        fimse
    fimse
Fimalgoritmo