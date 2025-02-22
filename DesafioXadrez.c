#include <stdio.h>

int main() {

    //TEMA 3
    //Desafio: nível novato + intermediário


    // Movimento da Torre 5 casas para a direita, utilizando 'for'

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Apenas para separar os movimentos


    // Movimento do Bispo 5 casas na diagonal para cima e à direita, utilizando 'while'

    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n"); // Apenas para separar os movimentos


    // Movimento da Rainha 8 casas para a esquerda, utilizando 'do-while'

    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    printf("\n"); // Apenas para separar os movimentos


    //Movimento do Cavalo, duas casas para baixo utilizando 'for', e uma casa para a esquerda utilizando 'while'

    printf("Movimento do Cavalo:\n");
    for (int m = 1; m <=2; m++){
        printf("Baixo\n");
    }

    int n = 1;
    while (n <= 1){
        printf("Esquerda\n");
        n++;
    }

    return 0;
}
