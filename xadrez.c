#include <stdio.h>

// Constantes para direções
#define CIMA "Cima"
#define BAIXO "Baixo"
#define ESQUERDA "Esquerda"
#define DIREITA "Direita"

int main() {
    printf("Movimentação das Peças:\n");

    // Bispo: 5 casas na diagonal superior direita (Cima + Direita)
    printf("\nBispo movendo 5 casas na diagonal superior direita:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%s + %s\n", CIMA, DIREITA);
    }

    // Torre: 5 casas para a direita
    printf("\nTorre movendo 5 casas para a direita:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%s\n", DIREITA);
    }

    // Rainha: 8 casas para a esquerda
    printf("\nRainha movendo 8 casas para a esquerda:\n");
    for (int i = 1; i <= 8; i++) {
        printf("%s\n", ESQUERDA);
    }

    return 0;
}
