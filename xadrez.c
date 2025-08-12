// Movimentando as Peças do xadrez
// NIVEL AVENTUREIRO

/* 
Torre: Move-se em linha reta horizontalmente ou verticalmente. 
Seu programa deverá simular o movimento da Torre cinco casas para a direita.
 
Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. 
Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
 
Rainha: Move-se em todas as direções. 
Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
*/

#include <stdio.h>

int main() {

    int torre, bispo, rainha, cavalo;

    for (torre = 1; torre <= 5; torre++) {
        printf("♖ direita\n");
    }

    printf("\n"); 

    bispo = 1;
    while (bispo <= 5) {
        printf("♗ cima e direita\n");
        bispo++;
    }

    printf("\n"); 

    rainha = 1;
    
    do
    {
        printf("♕ esquerda\n");
        rainha++;

    } while (rainha <= 8);

    // Movimento do Cavalo (2 para baixo, 1 para esquerda)
    printf("\n"); 

    int casas_baixo = 2;
    int casas_esquerda = 1;

    for (int i = 1; i <= casas_baixo; i++) {
        printf("♞ baixo\n");
        // Quando chegar na última casa para baixo, faz o movimento para a esquerda
        if (i == casas_baixo) {
            int j = 1;
            while (j <= casas_esquerda) {
                printf("♞ esquerda\n");
                j++;
            }
        }
    }

    return 0;
    

}