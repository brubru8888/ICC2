void merge(int arr[], int l, int m, int r, int *t, int *c){
    *t = 0;
    *c = 0;
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) {
        (*c)++; 
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            (*t)++; 
            i++;
        } else {
            arr[k] = R[j];
            (*t)++; 
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        (*t)++; 
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        (*t)++; 
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r, int *t, int *c){
    if (l < r) {
        int m = l + (r - l) / 2;
        int vet_merge[r];
        for (int i = 0; i < r; i++) {
            vet_merge[i] = arr[i];
        }
        mergeSort(vet_merge, l, m, t, c);
        mergeSort(vet_merge, m + 1, r, t, c);

        merge(vet_merge, l, m, r, t, c); 
    }
}