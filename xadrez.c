#include <stdio.h>

int main() {
    // ================================
    // Simulação de Movimentos de Peças de Xadrez
    // Torre -> for
    // Bispo -> while
    // Rainha -> do-while
    // ================================

    // Quantidade de casas que cada peça vai se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i; // contador genérico

    // ================================
    // Movimento da TORRE
    // ================================
    printf("=== Movimento da TORRE ===\n");
    printf("A Torre se move em linha reta, horizontal ou vertical.\n");
    printf("Simulando movimento de %d casas para a DIREITA:\n", casasTorre);

    for (i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // ================================
    // Movimento do BISPO
    // ================================
    printf("\n=== Movimento do BISPO ===\n");
    printf("O Bispo se move na diagonal.\n");
    printf("Simulando movimento de %d casas na diagonal (CIMA e DIREITA):\n", casasBispo);

    i = 1; // reinicia o contador
    while (i <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // ================================
    // Movimento da RAINHA
    // ================================
    printf("\n=== Movimento da RAINHA ===\n");
    printf("A Rainha se move em todas as direções.\n");
    printf("Simulando movimento de %d casas para a ESQUERDA:\n", casasRainha);

    i = 1; // reinicia o contador
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= casasRainha);

    // ================================
    // Fim do Programa
    // ================================
    printf("\nSimulação concluída com sucesso!\n");

    return 0;
}
