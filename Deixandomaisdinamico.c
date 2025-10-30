#include <stdio.h>

int main(void) {
    // Quantidade de casas que cada peça vai se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasBaixo = 2;
    int casasEsquerda = 1;

    int i, j;

    // TORRE – usando for
    printf("=== Movimento da TORRE ===\n");
    printf("A Torre se move em linha reta, horizontal ou vertical.\n");
    printf("Simulando movimento de %d casas para a DIREITA:\n", casasTorre);
    for (i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // BISPO – usando while
    printf("\n=== Movimento do BISPO ===\n");
    printf("O Bispo se move na diagonal.\n");
    printf("Simulando movimento de %d casas na diagonal (CIMA e DIREITA):\n", casasBispo);
    i = 1;
    while (i <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // RAINHA – usando do-while
    printf("\n=== Movimento da RAINHA ===\n");
    printf("A Rainha se move em todas as direções.\n");
    printf("Simulando movimento de %d casas para a ESQUERDA:\n", casasRainha);
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= casasRainha);

    // CAVALO – usando for + while
    printf("\n=== Movimento do CAVALO ===\n");
    printf("O Cavalo se move em forma de 'L'.\n");
    printf("Simulando movimento: 2 casas para BAIXO e 1 casa para a ESQUERDA.\n");

    for (i = 1; i <= casasBaixo; i++) {
        printf("Casa %d: Baixo\n", i);
    }

    j = 1;
    while (j <= casasEsquerda) {
        printf("Casa %d: Esquerda\n", casasBaixo + j);
        j++;
    }

    printf("\nSimulação concluída com sucesso!\n");
    return 0;
}
