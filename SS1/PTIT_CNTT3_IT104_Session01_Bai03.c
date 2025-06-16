//
// Created by asus on 6/16/2025.
//
#include <stdio.h>
#include <stdlib.h>

//O(n)
int* mallocArray (int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}
