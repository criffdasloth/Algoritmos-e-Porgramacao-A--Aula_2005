#include <stdio.h>

int main() {
    float notas[5];
    int i = 0;
    float soma = 0.0;   
    float media;
    int acima_da_media = 0; // contador para notas acima da média

    for (i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i]; // acumula a soma das notas
    }

    media = soma / 5; // calcula a média
    printf("A media das notas é: %.2f\n", media);

    for (i = 0; i < 5; i++) {
        if (notas[i] > media) { // verifica se a nota é maior que a média
            printf("A nota %.2f é maior que a media.\n", notas[i]);
        }
    }

    for (i = 0; i < 5; i++) {
        if (notas[i] > media) { // conta quantas notas são maiores que a média
            acima_da_media++;
        }
    }

    printf("O número de notas acima da media é: %d\n", acima_da_media);


    return 0;
}