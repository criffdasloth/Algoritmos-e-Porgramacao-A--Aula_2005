#include <stdio.h>

int main() {
    float vetor[5];
    float soma = 0;

    int i = 0;

    for (i = 0; i < 5; i++){
        printf("Digite cinco numeros reais: \n");
        scanf("%f", &vetor[i]);
        soma += vetor[i]; // incrementa a soma com a adição dos vetores atribuidos
    }

    printf("A soma do indice dos vetores e %f\n", soma);

    return 0;
}