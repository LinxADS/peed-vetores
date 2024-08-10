#iclude<stdio.h>
#include<stdlib.h>

int main (){

int vet[10];
int cont_par = 0;
int maior, menor;

for(int i = 0; i < 10; i++){

printf("Digite para a posição %d: ", i);
scanf("%d", &vet[i]);

maior = vet[0];
menor = vet[0];

for(int i = 0; i < 10; i++){
    if(vet[i] > maior){
        maior = vet[i];
    }
    if(vet[i] < menor){
        menor = vet[i];
    }
}

printf("Maior elemento do vetor: %d\n", maior);
printf("Menor elemento do vetor: %d\n", menor);

return 0;

}