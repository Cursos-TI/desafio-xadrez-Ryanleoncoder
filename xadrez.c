// Movimentando as Peças do xadrez
// NIVEL MESTRE

/* 
Torre: Move-se em linha reta horizontalmente ou verticalmente.
Seu programa deverá simular o movimento da Torre cinco casas para a direita (recursivo).

Bispo: Move-se na diagonal. Simular o movimento do Bispo cinco casas na diagonal para cima e à direita.
- Versão recursiva.
- Versão com loops aninhados (externo vertical, interno horizontal).

Rainha: Move-se em todas as direções.
Simular o movimento da Rainha oito casas para a esquerda (recursivo).

Cavalo: Duas casas para cima e uma para a direita, usando loops aninhados e múltiplas condições.
*/

#include <stdio.h>

// Torre - função recursiva
void torremove(int casas) {
    if (casas == 0) {
        printf("\n");
        return;
    }
    printf("♖ direita\n");
    torremove(casas - 1);
}

void bispo_loops(int casas) {
    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= 1; j++) { 
            printf("♗ cima e direita\n");
        }
    }
    printf("\n");
}

// Rainha - função recursiva
void rainhamove(int casas) {
    if (casas == 0) {
        printf("\n");
        return;
    }
    printf("♕ esquerda\n");
    rainhamove(casas - 1);
}

// Cavalo - loops aninhados, múltiplas variáveis/condições
void cavalomove() {
    for (int i = 1; i <= 2; i++) {
        printf("♞ cima\n");
        if (i < 2) continue; 
        for (int j = 1; j <= 1; j++) {
            printf("♞ direita\n");
            if (j == 1) break;
        }
    }
    printf("\n");
}

int main() {
    // Torre
    printf("Movimento da Torre:\n");
    torremove(5);

    // Bispo com loops aninhados
    printf("Movimento do Bispo:\n");
    bispo_loops(5);

    // Rainha
    printf("Movimento da Rainha:\n");
    rainhamove(8);

    // Cavalo
    printf("Movimento do Cavalo:\n");
    cavalomove();

    return 0;
}