#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscaBinariaRec(int lista_n[], int busca, int c, int f){
    if(c > f){
        return -1;
    }

    int meio = (c + f) / 2;

    if(lista_n[meio] == busca){
        return meio;
    }
    else if (lista_n[meio] > busca){
        return buscaBinariaRec(lista_n, busca, c, meio-1);
    }
    else{
        return buscaBinariaRec(lista_n, busca, meio+1, f);
    }   
}

int buscaBinaria(int lista_n[], int n, int busca){
    return buscaBinariaRec(lista_n, busca, 0, n-1);
}

void heapify(int a[], int p, int u){
    if(p <= u){
        int c = 2*p + 1;
        if(c <= u){
            if(c + 1 <= u && a[c+1] > a[c]){
                c++;
            }
            if(a[c]>a[p]){
                int tmp = a[c];
                a[c] = a[p];
                a[p] = tmp;
            }
            heapify(a,c,u);
        }
    }
}

void heap(int a[], int n){
    for(int i = n-1; i >= 0; i--){
        heapify(a,i,n-1);
    }
    for(int j = n-1; j >= 1; j--){
        int tmp = a[0];
        a[0] = a[j];
        a[j] = tmp;
        heapify(a,0,j-1); 
    }
}

int main() {
    int i, n, k;

    scanf("%d", &n);

    int *lista_n = (int *)malloc(n * sizeof(int));
    if (lista_n == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &lista_n[i]);
    }
    scanf("%d", &k);

    int *lista_k = (int *)malloc(k * sizeof(int));
    if (lista_k == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (i = 0; i < k; i++) {
        scanf("%d", &lista_k[i]);
    }

    heap(lista_n, n);

    for(i = 0; i < k; i++){
        int resposta = buscaBinaria(lista_n, n, lista_k[i]);
        if(resposta == -1){
            printf("0\n");
        }
        else{
            printf("1\n");
        }
    }

    free(lista_n);
    free(lista_k);

    return 0;
}