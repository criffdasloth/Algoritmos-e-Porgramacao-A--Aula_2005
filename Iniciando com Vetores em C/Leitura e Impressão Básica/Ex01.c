#include <stdio.h>

int main() {
    int vetor[5]; // i =0, i = 1, i = 2, i = 3, i = 4 
    int i;

    for (i = 0; i < 5; i++){ // i começa valendo 0, e será incrementado até 4, contando 5 elementos dentro do vetor
        printf("Digite cinco numeros inteiros: \n"); 
        scanf("%d", &vetor[i]); // i é a atribuição de cada índice do vetor
    }

    for (i = 0; i < 5; i++){
        printf("\nPosicao %d do vetor: %d!\n", (i+1), vetor[i]); // mostrando os numeros digitados e atribuição ao devido índice do vetor
    }

    return 0;
}