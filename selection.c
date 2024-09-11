#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Selecao

int main() {

    int lista[100], i, j, posicao, n = 100;
    srand(time(NULL)); 

    for(i = 0; i < n; i++){
        lista[i] = rand() % 100 + 1;
    } 

    for(i = 0; i < n; i++){
        printf("%d ", lista[i]);
    }
    printf("\n\n");

    for(i = 0; i < n-1; i++){
        int menor = lista[i];
        posicao = i;
        for(j=i+1; j < n; j++){
            if(lista[j]<menor){
                posicao = j;
            }
        }
        int temp = lista[i];
        lista[i] = lista[posicao];
        lista[posicao] = temp;
    }

    for(i = 0; i < n; i++){
        printf("%d ", lista[i]);
    }
}




