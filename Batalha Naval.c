#include <stdio.h>

#define TAM_TABULEIRO 10
#define TAM_HABILIDADE 5

void inicializarTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // Água
        }
    }
    tabuleiro[4][4] = 3; // Exemplo de navio
}

void gerarHabilidadeCone(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            habilidade[i][j] = (j >= i) ? 1 : 0;
        }
    }
}

void gerarHabilidadeCruz(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            habilidade[i][j] = (i == TAM_HABILIDADE / 2 || j == TAM_HABILIDADE / 2) ? 1 : 0;
        }
    }
}

void gerarHabilidadeOctaedro(int habilidade[TAM_HABILIDADE][TAM_HABILIDADE]) {
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            habilidade[i][j] = (abs(i - TAM_HABILIDADE / 2) + abs(j - TAM_HABILIDADE / 2) <= TAM_HABILIDADE / 2) ? 1 : 0;
        }
    }
}

void aplicarHabilidade(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int habilidade[TAM_HABILIDADE][TAM_HABILIDADE], int x, int y) {
    for (int i = 0; i < TAM_HABILIDADE; i++) {
        for (int j = 0; j < TAM_HABILIDADE; j++) {
            int tab_x = x + i - TAM_HABILIDADE / 2;
            int tab_y = y + j - TAM_HABILIDADE / 2;

            if (tab_x >= 0 && tab_x < TAM_TABULEIRO && tab_y >= 0 && tab_y < TAM_TABULEIRO && habilidade[i][j] == 1) {
                tabuleiro[tab_x][tab_y] = 5; // Marca área afetada
            }
        }
    }
}

void imprimirTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];
    inicializarTabuleiro(tabuleiro);

    int habilidade[TAM_HABILIDADE][TAM_HABILIDADE];

    gerarHabilidadeCone(habilidade);
    aplicarHabilidade(tabuleiro, habilidade, 2, 2);

    gerarHabilidadeCruz(habilidade);
    aplicarHabilidade(tabuleiro, habilidade, 5, 5);

    gerarHabilidadeOctaedro(habilidade);
    aplicarHabilidade(tabuleiro, habilidade, 7, 7);

    imprimirTabuleiro(tabuleiro);

    return 0;
}
