#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int n = 10, i;
    int a[10];

    for(i = 0; i < n; i++){
        a[i] = rand() % 100 + 1;
    }

    for(i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }

    for(i= 1; i < n;i++){
        int x = a[i]; 
        int j = i-1;
        while(j>=0 && a[j]>x){
            a[j+1] = a[j]; 
            j--;
        }
        a[j+1] = x; 
    }

    printf("\n\n");

    for(i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
}