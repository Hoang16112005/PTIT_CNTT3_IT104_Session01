#include <stdio.h>
#include <stdlib.h>

/**
 *
 * @param array mảng cần lập qua
 * @param arrayLength độ dài của manng
 * @param elementCheck
 * @return
 */
int countExist(int array[], int arrayLength, int elementCheck ) {
    int count = 0;
    for (int i = 0; i < arrayLength; i++) {
        if (array[i] == elementCheck) {
            count++;
        }
    }
    return count;
}

//array[1] => O(1)
//0(1)+ 0(1)+ 0(1)+...+0(1)=>0(n)


int main() {
    int arrayLength;
    printf("Enter length of array: ");
    scanf("%d", &arrayLength);
    int *array = (int*)malloc(arrayLength * sizeof(int));
    for (int i = 0; i < arrayLength; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    int element;
    printf("Enter element to be checked: ");
    scanf("%d", &element);
    int result = countExist(array, arrayLength, element);

    printf("The number of element %d is %d\n",element, result);
    free(array);
}
