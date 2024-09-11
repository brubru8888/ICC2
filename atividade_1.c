#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int i, j, posicao, num;
    char opc1[8] = "selecao";
    char opc2[6] = "bolha";
    char metodo[10];

    scanf("%s", &metodo);
    scanf("%d", &num);
    
    int *lista;
    lista = (int *)malloc(num * sizeof(int));
    if (lista == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for(i = 0; i < num; i++){
        scanf("%d", &lista[i]);
    }

    if(strcmp(metodo, opc1) == 0){
        for(i = 0; i < num-1; i++){
            int posicao = i;
            int menor = lista[posicao];
            for(j = i+1; j < num; j++){
                printf("C %d %d\n", posicao, j);
                if(lista[j] < menor){
                    menor = lista[j];
                    posicao = j;
                }
            }
            printf("T %d %d\n", i, posicao);
            int temp = lista[i];
            lista[i] = lista[posicao];
            lista[posicao] = temp;
        }

        for(i = 0; i < num; i++){
            printf("%d ", lista[i]);
        }
    }

    if(strcmp(metodo, opc2) == 0){
        int ultimaTroca;
        for(int j = num; j > 0; j = ultimaTroca){
            ultimaTroca = 0;
            for(i = 0; i < j-1; i++){
                printf("C %d %d\n", i, i+1);
                if(lista[i] > lista[i+1]){
                    printf("T %d %d\n", i, i+1);
                    int t = lista[i];
                    lista[i] = lista[i+1];
                    lista[i+1] = t;
                    ultimaTroca = i+1;
                }
            }
            if(ultimaTroca == 0) break; 
        }
            for(i = 0; i < num; i++){
            printf("%d ", lista[i]);
            }
        }
}