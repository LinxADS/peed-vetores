#include <stdio.h>
#include<stdlib.h>

int main() {
    float vet[10];
    int cont_neg = 0;
    float soma_posit = 0.0;

    for(int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%f", &vet[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(vet[i] < 0) {
            contagem_neg++;
        } else if(vet[i] > 0) {
            soma_posit += vet[i];
        }
    }

    printf("A quantidade de números negativos: %d\n", contagem_neg);
    printf("A soma dos números positivos: %.2f\n", soma_posit);

    return 0;
}