#include <stdio.h>

/**
 * @file desafio_xadrez_novato.c
 * @brief Desafio de Xadrez - Movimentando as Peças (Nível Novato)
 * @author Fabio D. Dorneles
 * @date 16/07/2025
 *
 * Este programa simula o movimento de três peças de xadrez: Torre, Bispo e Rainha.
 * Cada peça utiliza uma estrutura de repetição diferente (for, while, do-while)
 * para imprimir no console a direção de seu movimento a cada casa percorrida.
 * O objetivo é praticar o uso de loops em C.
 */

// Constantes para definir o número de casas que cada peça irá se mover.
// Usar constantes torna o código mais legível e fácil de modificar.
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8

int main() {
    // Variáveis para contar os passos de cada peça.
    int i; // Usada no loop for da Torre
    int passos_bispo;
    int passos_rainha;

    printf("--- Desafio de Xadrez: Movimentando Peças ---\n\n");

    // --- Implementação de Movimentação da Torre ---
    // A Torre se move em linha reta. Vamos simular 5 casas para a direita.
    // A estrutura 'for' é ideal aqui, pois o número de repetições é fixo e conhecido.
    printf("--- Movimento da Torre (%d casas para a Direita) ---\n", MOVIMENTOS_TORRE);
    for (i = 1; i <= MOVIMENTOS_TORRE; i++) {
        // Imprime o movimento a cada passo.
        printf("Passo %d: Direita\n", i);
    }
    printf("\n"); // Adiciona uma linha em branco para melhor separação visual.


    // --- Implementação de Movimentação do Bispo ---
    // O Bispo se move na diagonal. Vamos simular 5 casas para cima e para a direita.
    // A estrutura 'while' é usada para demonstrar outra forma de controlar a repetição.
    printf("--- Movimento do Bispo (%d casas na Diagonal Cima-Direita) ---\n", MOVIMENTOS_BISPO);
    passos_bispo = 1; // Inicializa o contador de passos.
    while (passos_bispo <= MOVIMENTOS_BISPO) {
        // Imprime a combinação de direções para representar a diagonal.
        printf("Passo %d: Cima, Direita\n", passos_bispo);
        passos_bispo++; // Incrementa o contador para evitar um loop infinito.
    }
    printf("\n");


    // --- Implementação de Movimentação da Rainha ---
    // A Rainha pode se mover em todas as direções. Vamos simular 8 casas para a esquerda.
    // A estrutura 'do-while' garante que o bloco de código execute pelo menos uma vez.
    printf("--- Movimento da Rainha (%d casas para a Esquerda) ---\n", MOVIMENTOS_RAINHA);
    passos_rainha = 1; // Inicializa o contador de passos.
    do {
        // Imprime o movimento a cada passo.
        printf("Passo %d: Esquerda\n", passos_rainha);
        passos_rainha++; // Incrementa o contador.
    } while (passos_rainha <= MOVIMENTOS_RAINHA); // A condição é verificada no final.
    printf("\n");

    printf("Simulação de movimentos concluída!\n");

    return 0; // Indica que o programa terminou com sucesso.
}