#include <stdio.h>

int main() {
    int vetor[8];
    int i = 0;
    int numero_procurado;
    int encontrado = 0; // flag para indicar se o número foi encontrado
    int posicao_encontrada = -1; // variável para armazenar a posição do número encontrado

    for (int i = 0; i < 8; i++) {
        printf("Digite o elemento %d do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero a ser procurado: ");
    scanf("%d", &numero_procurado);

    for (i = 0; i < 8; i++) {
        if (vetor[i] == numero_procurado) { // verifica se o elemento atual do vetor é igual ao número procurado
            encontrado = 1; // indica que o número foi encontrado
            posicao_encontrada = i; // armazena a posição do número encontrado dentro do indice do vetor
        }
    }

    if (encontrado == 1) {
        printf("O numero %d foi encontrado na posicao %d do vetor.\n", numero_procurado, posicao_encontrada);
    } else {
        printf("O numero %d nao foi encontrado no vetor.\n", numero_procurado);
    }

    return 0;
}