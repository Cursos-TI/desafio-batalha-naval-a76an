#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int tabuleiro[LINHAS][COLUNAS];
    int agua = 0, i, j, c = 1;
    char l;

    printf("\n");

    // Preenche a matriz tabuleiro de 10 X 10 com o valor 0, que representa água
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = agua;
        }
    }

    // Insere o navio 1 na vertical
    for (i = 0; i < 3; i++) {
        tabuleiro[i][3] = 3;
    }

    // Insere o navio 2 na vertical
    for (i = 2; i < 5; i++) {
        tabuleiro[7][i] = 3;
    }

    // Insere 2 navios na vertical
    for (i = 4, j =0; i > 1, j < 3; i--, j++) {
        tabuleiro[i][j] = 3;
    }

    for (i = 4, j = 5; i < 7, j < 8; i++, j++) {
        tabuleiro[i][j] = 3;
    }

    // Imprime o tabuleiro com os navios
    printf("TABULEIRO BATALHA NAVAL\n");
    printf("   ");
    for (l = 'A'; l < 'K'; l++) {
        printf("%c ", l);
    }
    printf("\n");

    for (c = 1, i = 0; i < LINHAS; c++, i++) {
        if (c == LINHAS) {
            printf("%d ", c);
        } else {
            printf("%d  ", c);
        }

        for (l = 'A', j = 0; j < COLUNAS; l++, j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
