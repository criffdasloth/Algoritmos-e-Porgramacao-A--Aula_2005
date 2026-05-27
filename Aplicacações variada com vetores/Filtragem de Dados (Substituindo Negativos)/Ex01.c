#include <stdio.h>

int main() {
    int vetor[10]; 
    int i = 0;

    for (i = 0; i < 10; i++){
        printf("Digite o %dº numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int subs = 0; // variável para contar quantos números foram substituídos

    for (int i = 0; i < 10; i++){
        if (vetor[i] < 0){  // verifica se o número é negativo
            vetor[i] = 0; // se o número for negativo, ele é substituído por 0
            subs++; 
        }
    }

    printf("Vetor atualizado: \n");

    for (int i = 0; i < 10; i++){
        printf("%d ", vetor[i]); // imprime o vetor atualizado
    }

    printf("\nQuantidade de numeros negativos substituidos por 0: %d\n", subs); // imprime a quantidade de números negativos que foram substituídos por 0

    return 0;
}