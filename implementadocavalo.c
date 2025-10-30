#include <stdio.h>

int main() {
    // ================================
    // Simulação de Movimentos de Peças de Xadrez
    // Torre -> for
    // Bispo -> while
    // Rainha -> do-while
    // Cavalo -> loops aninhados (for + while)
    // ================================

    // Quantidade de casas que cada peça vai se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento do cavalo: 2 casas para baixo e 1 para a esquerda
    int casasBaixo = 2;
    int casasEsquerda = 1;

    int i, j; // contadores genéricos

    // ================================
    // Movimento da TORRE (usando for)
    // ================================
    printf("=== Movimento da TORRE ===\n");
    printf("A Torre se move em linha reta (horizontal ou vertical).\n");
    printf("Simulando movimento de %d casas para a DIREITA:\n", casasTorre);

    for (i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // ================================
    // Movimento do BISPO (usando while)
    // ================================
    printf("\n=== Movimento do BISPO ===\n");
    printf("O Bispo se move na diagonal.\n");
    printf("Simulando movimento de %d casas na diagonal (CIMA e DIREITA):\n", casasBispo);

    i = 1;
    while (i <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // ================================
    // Movimento da RAINHA (usando do-while)
    // ================================
    printf("\n=== Movimento da RAINHA ===\n");
    printf("A Rainha se move em todas as direções.\n");
    printf("Simulando movimento de %d casas para a ESQUERDA:\n", casasRainha);

    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= casasRainha);

    // ================================
    // Movimento do CAVALO (usando for + while)
    // ================================
    printf("\n=== Movimento do CAVALO ===\n");
    printf("O Cavalo se move em forma de 'L'.\n");
    printf("Simulando movimento: 2 casas para BAIXO e 1 casa para a ESQUERDA.\n");

    // Loop externo (for) controla o movimento para baixo
    for (i = 1; i <= casasBaixo; i++) {
        printf("Casa %d: Baixo\n", i);
    }

    // Loop interno (while) controla o movimento para a esquerda
    j = 1;
    while (j <= casasEsquerda) {
        printf("Casa %d: Esquerda\n", casasBaixo + j);
        j++;
    }

    // ================================
    // Fim do Programa
    // ================================
    printf("\nSimulação concluída com sucesso!\n");

    return 0;
}
