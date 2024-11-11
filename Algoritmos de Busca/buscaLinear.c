int buscaLinear(int a[], int n, int x){
   for(int i=0; i<n; i++){
      if(a[i] == x) {
         return i;
      }
   }
   return -1;
}

int buscaLinearOrdenado(int a[], int n, int x){
   for(int i=0; i < n; i++){
      if(a[i] > x){
         return -1;
      }
      if(a[i] == x) {
         return i;
      }
   }
   return -1;   
}