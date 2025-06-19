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
    int deleteElement ;
    printf("Enter delete element ");
    scanf("%d", &deleteElement);
    for (int i = deleteElement; i < arrayLength; i++) {
        array[i] = array[i+1];
    }
    arrayLength--;
    printf("Array after deleting: ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", array[i]);
    }
    free(array);
}