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