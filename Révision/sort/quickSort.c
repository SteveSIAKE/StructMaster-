/**
 * on compare chaque élément avec le suivant et on les permute si ils sont dans le mauvais ordre.
 * on répète cette opération jusqu'à ce que tous les éléments soient dans le bon ordre.
 */
  

#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int ar[], int low, int high) {
    int pivot = ar[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (ar[j] < pivot) {
            i++;
            swap(&ar[i], &ar[j]);
        }
    }
    swap(&ar[i + 1], &ar[high]);
    return (i + 1);
}

int quickSort(int ar[], int low, int high) {
    if (low < high) {
        int pi = partition(ar, low, high);
        quickSort(ar, low, pi - 1);
        quickSort(ar, pi + 1, high);
    }
    return 0;
}