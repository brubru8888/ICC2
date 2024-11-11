#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void qs(int a[], int c, int f){
	if(c >= f){
		return;
	}
	int m = (c + f) / 2;
	int p = a[m];
	int i = c;
	int j = f;
	while(1){
		while(a[i] < p){
			i++;
		}
		while(a[j] > p){
			j--;
		}
		if(i<j){
			int t = a[i];
			a[i] = a [j];
			a[j] = t;
			c++;
			j--;
			}
		else{
			break;
		}
	}
	qs(a, c, j);
	qs(a, j+1, f);
}