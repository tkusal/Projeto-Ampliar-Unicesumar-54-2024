/*
Objetivo:
Desenvolver em C o jogo da velha (Tic-Tac-Toe) utilizando apenas a linha de comando.

Instruções:

Requisitos Funcionais:
RF01 - O jogo deve permitir dois jogadores humanos, que se revezam inserindo os símbolos 'X' e 'O' em um tabuleiro 3x3.
RF02 - Deve haver verificação automática de vitória, empate ou jogadas inválidas.
RF03 - O jogo deve exibir o tabuleiro atualizado após cada jogada e solicitar a próxima entrada do jogador.

Requisitos Técnicos:
RT01 - Utilizar uma matriz 3x3 para representar o tabuleiro do jogo.
RT02 - Implementar toda a lógica do jogo na linha de comando, incluindo a exibição do tabuleiro e a coleta de entradas dos jogadores.
RT03 - Incluir tratamento de exceções para evitar erros em tempo de execução, como inserção em células já ocupadas ou entradas inválidas.
RT04 - Ao final do jogo, exibir uma mensagem indicando o vencedor ou declarando empate, e oferecer a opção de iniciar uma nova partida.

Dicas:
- Use uma matriz bidimensional (char[3][3]) para representar o tabuleiro do jogo, iniciando todas as posições com um caractere especial (como '-') para indicar células vazias.
- Para cada jogada, peça ao jogador para inserir as coordenadas da célula onde deseja colocar seu símbolo (por exemplo, linha e coluna).
- Valide as entradas para garantir que estão nos limites do tabuleiro que a célula escolhida não esteja ocupada.
- Após cada jogada, atualize o tabuleiro e exiba-o novamente no console.
- Verifique as condições de vitória (três símbolos iguais em linha, coluna ou diagonal) ou empate (tabuleiro completo sem vencedor).
*/