#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//    int arr[] = {64, 34, 25, 12, 22, 11, 90};
// i = 0,j = 0, int arr[] = {34, 25, 12, 22, 11, 64, 90}, 