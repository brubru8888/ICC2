#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Bolha

int main() {

    int a[100], i,  n = 100;

    for(i = 0; i < n; i++){
        a[i] = rand() % 100 + 1;
    }

    for(i = 0; i < 100; i++){
        printf("%d ", a[i]);
    }

    printf("\n\n");

    for(int j = n; j > 0 ; j--){
        for(i = 0; i < j-1; i++){
            if(a[i]>a[i+1]){
                int t = a [i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }

    }

    for(i = 0; i < 100; i++){
    printf("%d ", a[i]);
}

}