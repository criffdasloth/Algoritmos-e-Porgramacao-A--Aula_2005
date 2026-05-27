#include <stdio.h>

int main() {
    int vetor[6]; // posição máxima n-1
    int i = 0;

    for (i = 0; i < 6; i++){ // i começa valendo 0, e será incrementado até 4, contando 6 elementos dentro do vetor
        printf("Digite seis numeros inteiros: \n"); 
        scanf("%d", &vetor[i]); // i é a atribuição de cada índice do vetor
    }

    for (i = 5; i >= 0; i--){ // imprime em ordem decrescente as atribuições do índice -> começa em 5 pois n-1
        printf("\nPosicao %d do vetor: %d!\n", i, vetor[i]); 
    }

    return 0;
}