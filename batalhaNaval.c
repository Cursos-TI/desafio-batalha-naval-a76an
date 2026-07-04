#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define LINHASHABILIDADES 3
#define COLUNASHABILIDADES 5

// Desafio Batalha Naval - MateCheck

int main() {

    int tabuleiro[LINHAS][COLUNAS];
    int tabuleiroHabilidade[LINHASHABILIDADES][COLUNASHABILIDADES];
    int agua = 0, a = 1, j;
    char l;

    printf("\n");

    // Preenche a matriz tabuleiro de 10 X 10 com o valor 0, que representa água
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = agua;
        }
    }

    // Insere o navio 1 na vertical no tabuleiro da batalha naval
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][3] = 3;
    }

    // Insere o navio 2 na vertical no tabuleiro da batalha naval
    for (int i = 2; i < 5; i++) {
        tabuleiro[7][i] = 3;
    }

    // Insere 2 navios na vertical no tabuleiro da batalha naval
    for (int i = 4, j =0; i > 1, j < 3; i--, j++) {
        tabuleiro[i][j] = 3;
    }

    for (int i = 4, j = 5; i < 7, j < 8; i++, j++) {
        tabuleiro[i][j] = 3;
    }

    // Insere a habilidade especial cone no tabuleiro da batalha naval
    for (int i = 7, pi = 7; i < (LINHASHABILIDADES + 7); i++, pi--) {
        for (int c = 0; c < a; c++) {
            tabuleiro[i][pi + c] = 1;
        }
        a = (a + 2);
    }

    // Insere a habilidade especial cruz no tabuleiro da batalha naval
    for (int i = 4; i < (LINHASHABILIDADES + 4); i++) {
        if (i % 2 == 0) {
            tabuleiro[i][2] = 1;
        } else {
            for (int c = 0; c < 5; c++) {
                tabuleiro[i][c] = 1;
            }
        }
    }

    // Insere a habilidade especial octaedro no tabuleiro da batalha naval
    for (int i = 2; i < (LINHASHABILIDADES + 2); i++) {
        if (i % 2 == 0) {
            tabuleiro[i][7] = 1;
        } else {
            for (int c = 6; c < 9; c++) {
                tabuleiro[i][c] = 1;
            }
        }
    }

    // Imprime o tabuleiro com os navios
    printf("TABULEIRO BATALHA NAVAL\n");
    printf("   ");
    for (l = 'A'; l < 'K'; l++) {
        printf("%c ", l);
    }
    printf("\n");

    for (int c = 1, i = 0; i < LINHAS; c++, i++) {
        if (c >= LINHAS) {
            printf("%d ", c);
        } else {
            printf("%d  ", c);
        }

        for (l = 'A', j = 0; j < COLUNAS; l++, j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    return 0;
}
