/*
    Desenvolver um programa em C que implemente o jogo de "Forca".

    Descrição do Jogo: O jogo consiste em um jogador tentar adivinhar uma palavra secreta fornecida pelo computador. A cada rodada, o jogador sugere uma letra. Se a letra estiver presente na palavra secreta, ela é revelada nas posições corretas. Caso contrário, o jogador acumula um erro. O jogo termina quando o jogador adivinha completamente a palavra ou comete 7 erros.

    Requisitos funcionais:

    RF01. Escolha da Palavra: O computador deve escolher uma palavra secreta de um conjunto pré-definido de palavras.
    RF02. Entrada do Jogador: Permitir que o jogador insira uma letra a cada rodada.
    RF03. Verificação de Letra: O programa deve verificar se a letra sugerida pelo jogador está presente na palavra secreta.
    RF04. Exibição Parcial da Palavra: A cada acerto, a letra adivinhada deve ser exibida na posição correta da palavra, enquanto as letras não adivinhadas permanecem ocultas (por exemplo, com "_").
    RF05. Contagem de Erros: Cada erro do jogador aumenta o contador de erros, até um limite máximo de 7 erros.
    RF06. Fim de Jogo: O jogo termina quando o jogador completa a palavra ou quando atinge o limite de 7 erros.
    RF07. Mensagem de Vitória ou Derrota: Exibir uma mensagem final indicando se o jogador venceu ou perdeu.
    
    Requisitos Técnicos:

    RT01. Uso de Estruturas de Controle: Implementar loops e condicionais para gerenciar o fluxo do jogo.
    RT02. Manipulação de Strings: Utilizar arrays de caracteres para armazenar e manipular a palavra secreta e as tentativas do jogador.
    RT03. Verificação de Letra Repetida: Evitar que o jogador insira a mesma letra mais de uma vez.
    RT04. Contador de Erros: Implementar um contador que permita no máximo 7 erros antes de o jogador perder o jogo.
    RT05. Interação com o Usuário: Exibir mensagens claras e informativas para guiar o jogador ao longo do jogo.
    
    Dica:
    utilize funções de manipulação de strings da biblioteca string.h para comparar e exibir o progresso da palavra.
    
    Biblioteca strin.h: https://petbcc.ufscar.br/string/
*/    