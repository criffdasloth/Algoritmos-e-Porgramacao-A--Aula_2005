#include <stdio.h>

int main() {
    int vetor[10]; 
    int i = 0;
    int indices_pares = 0;
    int indices_impar = 0;

    puts("Digite 10 numeros inteiros:"); // mensagem para o usuário

    for (i = 0; i < 10; i++){ // i começa valendo 0, e será incrementado até 9, contando 10 elementos dentro do vetor 
        printf("Digite o %dº numero inteiro: ", i + 1); // para que o usuário saiba qual número ele está digitando
        scanf("%d", &vetor[i]); // i é a atribuição de cada índice do vetor
    }

    for (int i = 0; i < 10; i++){
        if (vetor[i] % 2 == 0){ // encontra o numero par
            indices_pares++;
        } else {
            indices_impar++;
        }
    }

    printf("Sao pares os seguintes indices: %d!\n", indices_pares);
    printf("Sao impares os seguintes indices: %d!\n", indices_impar);

    return 0;
}