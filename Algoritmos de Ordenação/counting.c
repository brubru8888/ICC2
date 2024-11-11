#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void cs(int a[], int n, int k){//dá pra calcular o k e não usar como parametrô
	int cnt[k];
	for(int i = 0; i < k; i++){
		cnt[i] = 0;
	}
	for(int j = 0; j < n; j++){
		cnt[a[j]]++;
	}
	int posi[k];
	int t = 0;
	for(int i = 0; i < k; i++){
		posi[i] = t;
		t += cnt[i];
	}
	int b[n];
	for(int j = 0; j < n; j++){
		b[posi[a[j]]] = a[j];
		posi[a[j]]++;
	}
	for(int j = 0; j < n; j++){
		a[j] = b[j];
	}
}