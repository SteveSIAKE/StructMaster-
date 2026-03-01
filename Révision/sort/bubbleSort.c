/** on compare chaque élément avec le suivant et on les permute si ils sont dans le mauvais ordre.
 on répète cette opération jusqu'à ce que tous les éléments soient dans le bon ordre.
 on répète cette opération jusqu'à ce que tous les éléments soient dans le bon ordre. 
*/
 
#include <stdio.h>

int bubbleSort (int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}
