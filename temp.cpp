#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    int temp[n];
    int j = 0;
    
    for (int i = 0; i < n; i++) {
        int k;
        for (k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                break;
            }
        }
        if (k == j) {
            temp[j++] = arr[i];
        }
    }
    
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }
    
    for (int i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
}


