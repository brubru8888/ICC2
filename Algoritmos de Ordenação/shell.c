#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void shell(int a[], int n){
    int g ;
    g = 1;
    while (g < n) {
        g*= 2;
    }
    g = g/2 -1;
    while (g>=1) {
        for (int i = g; i < n ; i++ ){
            int x = a[i];
            int j = i-g;
            while (j >=0 && a[j] > x) {
                a[j+g] = a[j];
                j -=g; 
            }
            a[j+g] = x;
        }
        g /=2;
    }
}