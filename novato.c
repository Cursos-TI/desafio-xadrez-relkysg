#include <stdio.h>

/*
 * Simulação dos movimentos das peças de xadrez: Torre, Bispo e Rainha.
 * Cada peça utiliza uma estrutura de repetição diferente para simular seu movimento.
 * 
 * Torre: Move-se 5 casas para a direita usando um loop for.
 * Bispo: Move-se 5 casas na diagonal para cima e à direita usando um loop while.
 * Rainha: Move-se 8 casas para a esquerda usando um loop do-while.
 */

int main() {
    // Número de casas a serem movidas por cada peça
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    int i; // variável para controle dos loops
    int contador; // variável auxiliar para while e do-while

    // Movimento da Torre - 5 casas para a direita usando for
    printf("Movimento da Torre:\n");
    for (i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo - 5 casas na diagonal para cima e à direita usando while
    printf("Movimento do Bispo:\n");
    contador = 0;
    while (contador < casas_bispo) {
        printf("Cima, Direita\n");
        contador++;
    }
    printf("\n");

    // Movimento da Rainha - 8 casas para a esquerda usando do-while
    printf("Movimento da Rainha:\n");
    contador = 0;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador < casas_rainha);

    return 0;
}
