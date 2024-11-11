#include <stdio.h>
#include <stdlib.h>

int buscaBinariaRec(int lista_n[], int busca, int c, int f){
    if(c > f){
        return -1;
    }

    int meio = (c + f) / 2;

    if(lista_n[meio] == busca){
        return meio;
    }
    else if (lista_n[meio] > busca){
        return buscaBinariaRec(lista_n, busca, c, meio-1);
    }
    else{
        return buscaBinariaRec(lista_n, busca, meio+1, f);
    }   
}

int buscaBinaria(int lista_n[], int n, int busca){
    return buscaBinariaRec(lista_n, busca, 0, n-1);
}