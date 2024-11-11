#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shell(int v[], int n, int *opr_shell) {
    int gap = 1;
    while (gap <= n) {
        gap *= 2;
    }
    gap = gap / 2 - 1;
    while (gap > 0) {
        for (int i = gap; i < n; i++) {
            int x = v[i];
            (*opr_shell)++;
            int j = i - gap;
            while (j >= 0 && v[j] > x) {
                (*opr_shell)++;
                v[j + gap] = v[j];
                (*opr_shell)++; 
                j -= gap;
            }
            if(j>=0)(*opr_shell)++;
            v[j + gap] = x;
            (*opr_shell)++;
        }
        gap /= 2;
    }
}

void quick(int v[], int f, int l, int *opr_quick) {
    if (f >= l) {
        return;
    }
    int m = (l + f) / 2;
    int pivot = v[m];
    (*opr_quick)++;
    int i = f;
    int j = l;
    while (1) {
        while (v[i] < pivot) {
            (*opr_quick)++;  
            i++;
        }
        while (v[j] > pivot) {
            (*opr_quick)++;  
            j--;
        }
        (*opr_quick)+=2;
        if (i >= j) {
            break;
        }
        int aux = v[i];
        v[i] = v[j];
        v[j] = aux;
        (*opr_quick)+=3;
        i++;
        j--;
    }
    quick(v, f, j, opr_quick);
    quick(v, j + 1, l, opr_quick);
}


int main() {
    int i, n;

    scanf("%d", &n);

    int *lista_n = (int *)malloc(n * sizeof(int));
    if (lista_n == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &lista_n[i]);
    }


    for (i = 0; i < n; i++) {
        int opr_shell = 0, opr_quick = 0;

        int *lista_copia1 = (int *)malloc(n * sizeof(int));
        int *lista_copia2 = (int *)malloc(n * sizeof(int));
        if (lista_copia1 == NULL) {
            printf("Erro ao alocar memória para a cópia.\n");
            free(lista_n); 
            return 1;
        }
        if (lista_copia2 == NULL) {
            printf("Erro ao alocar memória para a cópia.\n");
            free(lista_n); 
            return 1;
        }
        memcpy(lista_copia1, lista_n, n * sizeof(int));
        memcpy(lista_copia2, lista_n, n * sizeof(int));


        shell(lista_copia1, i + 1, &opr_shell);
        quick(lista_copia2, 0, i, &opr_quick);

        if (opr_shell > opr_quick) {
            printf("Q ");  
        } else if (opr_shell < opr_quick) {
            printf("S "); 
        } else {
            printf("- ");; 
        }

        free(lista_copia1);
        free(lista_copia2);
    }

    free(lista_n);

    return 0;
}