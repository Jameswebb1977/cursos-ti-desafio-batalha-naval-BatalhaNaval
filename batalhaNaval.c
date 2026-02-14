#include <stdio.h>

int main() {
    // Variáveis que definem o tamanho do tabuleiro e dos navios
    int tamanhoTabuleiro = 10;
    int tamanhoNavio = 3;

    // Declaração do tabuleiro
    int tabuleiro[10][10];

    // Declaração dos navios
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // Coordenadas iniciais dos navios
    int linhaH = 2, colunaH = 3;
    int linhaV = 5, colunaV = 6;

    int i, j;

    // Inicializa o tabuleiro com água (0)
    for (i = 0; i < tamanhoTabuleiro; i++) {
        for (j = 0; j < tamanhoTabuleiro; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona o navio horizontal
    for (i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // Posiciona o navio vertical
    for (i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // Imprime o cabeçalho das colunas (A até J)
    printf("  ");
    for (j = 0; j < tamanhoTabuleiro; j++) {
        printf(" %c", 'A' + j);
    }
    printf("\n");

    // Imprime o tabuleiro
    for (i = 0; i < tamanhoTabuleiro; i++) {
        printf("%d ", i);
        for (j = 0; j < tamanhoTabuleiro; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

   
    return 0;
    
}
