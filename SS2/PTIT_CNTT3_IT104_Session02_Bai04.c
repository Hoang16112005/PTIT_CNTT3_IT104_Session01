#include <stdio.h>
#include <stdlib.h>

int main() {
     int arrayLength;
     printf("Enter the length of array: ");
     scanf("%d", &arrayLength);
     int *array = (int*)malloc(arrayLength * sizeof(int));
     int index;
     int newValue;
     printf("Array \n");
     for (int i = 0; i < arrayLength; i++) {
          printf("Array[%d]: ", i);
          scanf("%d", &array[i]);
     }

     printf("Current Array: ");

     for (int i = 0; i < arrayLength; i++) {
          printf("%d ", array[i]);
     }
     printf("\n");
     printf("Enter index: ");
     scanf("%d", &index);
     printf("Enter value : ");
     scanf("%d", &newValue);

     for (int i = 0; i < arrayLength; i++) {
          if (i == index) {
               array[i] = newValue;
          }
     }
     printf("New array: ");
     for (int i = 0; i < arrayLength; i++) {
          printf("%d ", array[i]);
     }
     free(array);
}
