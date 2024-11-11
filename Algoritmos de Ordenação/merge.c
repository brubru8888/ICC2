#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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
        (*C)++;
        if (a[i1] <= a[i2]) {
            b[j] = a[i1];
            (*T)++;
            i1++;
        } else {
            b[j] = a[i2];
            (*T)++;
            i2++;
        }
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