// Movimentando as Peças do xadrez
// NIVEL NOVATO

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

    int torre, bispo, rainha;

    for (torre = 1; torre <= 5; torre++) {
        printf("♖ Torre  se moveu para a direita %d casa(s)\n", torre);
    }

    bispo = 1;
    while (bispo <= 5) {
        printf("♗ Bispo se moveu para cima e para direita %d casa(s)\n", bispo);
        bispo++;
    }

    rainha = 1;
    
    do
    {
        printf("♕ Rainha  se moveu para a esquerda %d casa(s)\n", rainha);
        rainha++;

    } while (rainha <= 8);
    
    return 0;
}