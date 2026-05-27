#include <stdio.h>

int main() {
    int vetor[8]; 
    int i = 0;
    
    puts("Digite 8 numeros inteiros:"); // mensagem para o usuário

    for (i = 0; i < 8; i++){ // i começa valendo 0, e será incrementado até 7, contando 8 elementos dentro do vetor 
        printf("Digite o %dº numero inteiro: ", i + 1); // para que o usuário saiba qual número ele está digitando
        scanf("%d", &vetor[i]); // i é a atribuição de cada índice do vetor
    }

    int maior_valor = vetor[0]; // inicializa o maior valor com o primeiro elemento do vetor

    for (int i = 0; i < 8; i++){
        if (vetor[i] > maior_valor){
            maior_valor = vetor[i];
        }
    }

    printf("O maior valor do vetor é: %d\n", maior_valor);

    return 0;
}
