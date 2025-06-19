#include <stdio.h>
#include <stdlib.h>

int main() {
    int arrayLength;
    printf("Enter the length of array: ");
    scanf("%d", &arrayLength);
    int *array = (int*)malloc(arrayLength * sizeof(int));
    int start = 0;
    int end = arrayLength - 1;
    for (int i = 0; i < arrayLength; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", array[i]);
    }
    int insertIndex;
    int value;
    printf("Enter insert index ");
    scanf("%d", &insertIndex);
    printf("Enter insert value ");
    scanf("%d", &value);
    for (int i = arrayLength; i >= insertIndex; i--) {
        array[i+1] = array[i];
    }
    array[insertIndex] = value;
    ++arrayLength;
    printf("Array after inserting: ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", array[i]);
    }
    free(array);
}