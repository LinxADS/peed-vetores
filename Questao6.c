#iclude<stdio.h>
#include<stdlib.h>

int main (){

int vet[10];
int cont_par = 0;

for(int i = 0; i < 10; i++){

printf("Digite para a posição %d: ", i);
scanf("%d", &vet[i]);

    for(int i = 0; i < 10; i++){
    if(vet[i] % 2 == 0){
        cont_par++;
    }        

    }
}

printf("A quantidade de valores pares no vetor: %d\n", cont_par);
return 0:    
}