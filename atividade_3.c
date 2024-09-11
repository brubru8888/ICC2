#include <stdio.h>
#include <stdlib.h>

void insertion(int vetores[], int tamanho){
    int t = 0, c = 0;
    int vet_insert[tamanho];
    for (int i = 0; i < tamanho; i++) {
        vet_insert[i] = vetores[i];
    }
    for(int i = 1; i < tamanho; i++){
        t++;
        int x = vet_insert[i]; 
        int j = i - 1;
        while(j >= 0 && vet_insert[j] > x){
            c++;
            t++;
            vet_insert[j + 1] = vet_insert[j]; 
            j--;
        }
        if(j >= 0)c++;
        t++;
        vet_insert[j + 1] = x; 
    }
    printf("I %d %d %d\n", tamanho, t, c);
}

void merge(int a[], int c, int f, int b[], int *T, int *C){
    if (c >= f) {
        return;
    }
    
    int m = (c + f) / 2;
    
    merge(a, c, m, b, T, C);
    merge(a, m + 1, f, b, T, C);
    
    int i1 = c;
    int i2 = m + 1;
    int j = 0;
    
    while (i1 <= m && i2 <= f) {
        if (a[i1] < a[i2]) {
            b[j] = a[i1];
            (*T)++;
            i1++;
        } else {
            b[j] = a[i2];
            (*T)++;
            i2++;
        }
        (*C)++;
        j++;
    }
    
    while (i1 <= m) {
        b[j] = a[i1];
        (*T)++;
        i1++;
        j++;
    }
    
    while (i2 <= f) {
        b[j] = a[i2];
        (*T)++;
        i2++;
        j++;
    }
    
    j = 0;
    for (int i = c; i <= f; i++) {
        a[i] = b[j];
        (*T)++;
        j++;
    }
}

int main(){
    int i, j, q;

    scanf("%d", &q);

    int *lista_n = (int *)malloc(q * sizeof(int));
    if (lista_n == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for(i = 0; i < q; i++){
        scanf("%d", &lista_n[i]);
    }

    int **vetores = (int **)malloc(q * sizeof(int *));
    if (vetores == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for(i = 0; i < q; i++){
        vetores[i] = (int *)malloc(lista_n[i] * sizeof(int));
        for(j = 0; j < lista_n[i]; j++){
            scanf("%d", &vetores[i][j]);
        }
    }

    for(i = 0; i < q; i++){
        int *temp = (int *)malloc(lista_n[i] * sizeof(int));
        if (temp == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }

        int t = 0, c = 0;
        insertion(vetores[i], lista_n[i]);
        merge(vetores[i], 0, lista_n[i] - 1, temp, &t, &c);
        free(temp);
        printf("M %d %d %d\n", lista_n[i], t, c); 
    }

    for(i = 0; i < q; i++){
        free(vetores[i]);
    }
    free(vetores);
    free(lista_n);

    return 0;
}
