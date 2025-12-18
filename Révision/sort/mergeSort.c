#include <stdio.h>
#include <stdlib.h> 
int merge(int ar[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int* L = (int*)malloc(n1 * sizeof(int));
    int* R = (int*)malloc(n2 * sizeof(int));
    for (i = 0; i < n1; i++)
        L[i] = ar[left + i];
    for (j = 0; j < n2; j++)
        R[j] = ar[mid + 1 + j]; 
    i = 0; 
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            ar[k] = L[i];
            i++;
        } else {
            ar[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        ar[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        ar[k] = R[j];
        j++;
        k++;
    }
    free(L);
    free(R);
}
void mergeSort(int ar[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(ar, left, mid);
        mergeSort(ar, mid + 1, right);
        merge(ar, left, mid, right);
    }
}