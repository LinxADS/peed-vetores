#iclude<stdio.h>
#include<stdlib.h>

int main (){

int A[6] = {1, 0, 5, -2, -5, 7};
int soma = A[0] + A[1] + A[5];

printf("A soma dos valores das posições A[0], A[1] e A[5] é: %d\n", soma);

A[4] = 100;

printf("Valores do Array A: \n");

    for (int i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }
return 0;
}