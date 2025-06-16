//
// Created by asus on 6/16/2025.
//

#include <stdio.h>
// O(n)
void printDouble(int n) {
    int i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i *= 2;
    }
}