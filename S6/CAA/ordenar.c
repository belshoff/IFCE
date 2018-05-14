#include <stdio.h>
#include <stdlib.h>

void swap(int* from, int* to) {
    int aux = *to;
    *to = *from;
    *from = aux;
}

void ordenar(int A[], int n){
    // Encontrar o menor elemento e fazer swap com o da menor posicao não ordenada.
    int pos_ord = 0;
    do {
        int menor = A[pos_ord], pos = pos_ord;
        int i;
        for(i = pos_ord; i < n; i++) {
            if(A[i] < menor) {
                menor = A[i];
                pos = i;
            }
        }
        // swap(&A[pos_ord++], &menor);
        int swap;
        swap = A[pos_ord];
        A[pos_ord++] = menor;
        A[pos] = swap;
    }while(pos_ord != n);
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    ordenar(arr, 5);
    return 0;
}