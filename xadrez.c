// Movimentando as Peças do xadrez
// NIVEL mestre

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
    // Caso base: não há mais casas para mover
    if (casas == 0) {
        printf("\n");
        return;
    }
    printf("♖ 1 casa para a direita\n");
    torremove(casas - 1); // Passo recursivo
}

// Bispo - função recursiva
void bispo_recursivo(int casas) {
    // Caso base: não há mais casas para mover
    if (casas == 0) {
        printf("\n");
        return;
    }
    printf("♗ 1 casa na diagonal (cima e direita)\n");
    bispo_recursivo(casas - 1); // Passo recursivo
}

// Bispo - loops aninhados (externo vertical, interno horizontal)
void bispo_loops(int casas) {
    for (int i = 1; i <= casas; i++) { // Movimento vertical
        for (int j = 1; j <= 1; j++) { // Movimento horizontal (apenas 1 por diagonal)
            printf("♗ 1 casa na diagonal (cima e direita)\n");
        }
    }
    printf("\n");
}

// Rainha - função recursiva
void rainhamove(int casas) {
    // Caso base: não há mais casas para mover
    if (casas == 0) {
        printf("\n");
        return;
    }
    printf("♕ 1 casa para a esquerda\n");
    rainhamove(casas - 1); // Passo recursivo
}

// Cavalo - loops aninhados, múltiplas variáveis/condições
void cavalomove() {
    // Movimento: duas casas para cima e uma para a direita
    int casas_cima = 2;
    int casas_direita = 1;
    int passo = 0;

    for (int i = 1; i <= casas_cima; i++) {
        printf("♞ 1 casa para cima\n");
        passo++;
        // Se ainda não chegou ao segundo passo, continue subindo
        if (passo < casas_cima) continue;
        // Após subir duas casas, move para a direita
        for (int j = 1; j <= casas_direita; j++) {
            printf("♞ 1 casa para a direita\n");
            // Exemplo de uso de break (não necessário aqui, mas ilustrativo)
            if (j == 1) break;
        }
    }
    printf("\n");
}

int main() {
    // Torre
    printf("Movimento da Torre:\n");
    torremove(5);

    // Bispo recursivo
    printf("Movimento do Bispo (recursivo):\n");
    bispo_recursivo(5);

    // Bispo com loops aninhados
    printf("Movimento do Bispo (loops aninhados):\n");
    bispo_loops(5);

    // Rainha
    printf("Movimento da Rainha:\n");
    rainhamove(8);

    // Cavalo
    printf("Movimento do Cavalo:\n");
    cavalomove();

    return 0;
}