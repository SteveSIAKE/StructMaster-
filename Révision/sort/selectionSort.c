/** on cherche le plus petit élément et on l'échange avec le premier élément.
 on répète cette opération jusqu'à ce que tous les éléments soient dans le bon ordre.  657 00 38 25 */

#include <stdio.h>

int selectionSort (int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int minIndex = i;
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    return arr;
}

