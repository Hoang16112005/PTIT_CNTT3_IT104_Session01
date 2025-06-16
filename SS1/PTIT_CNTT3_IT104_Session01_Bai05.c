//
// Created by asus on 6/16/2025.
//

#include <stdio.h>

//O(n)
int main() {
    int array[5] = {2, 1, 4, 8, 5};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    int tempValue = 0;
    for (int i = 0; i < arrayLength - 1; i++) {
        if (array[i] > array[i + 1]) {
            tempValue = array[i];
            array[i] = array[i + 1];
            array[i + 1] = tempValue;
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", array[i]);
    }
}