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

    while (start < end) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }

    printf("Reversed Array : ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", array[i]);
    }

    free(array);
}
