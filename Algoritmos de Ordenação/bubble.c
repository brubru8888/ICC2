#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Bolha

void bubble(int a[], int n){
    for(int j = n; j > 0 ; j--){
        for(int i = 0; i < j-1; i++){
            if(a[i]>a[i+1]){
                int t = a [i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
    }
}

int main(){
    int a[100],  n = 100;

    for(int i = 0; i < n; i++){
        a[i] = rand() % 100 + 1;
    }

    for(int i = 0; i < 100; i++){
        printf("%d ", a[i]);
    }

    printf("\n\n");

    bubble(a, n);
    
    for(int i = 0; i < 100; i++){
    printf("%d ", a[i]);
    }

    return 0;
}