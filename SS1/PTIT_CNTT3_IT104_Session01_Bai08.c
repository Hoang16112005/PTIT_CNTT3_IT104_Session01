#include <stdio.h>

int countDuplicate(int array[], int arrayLength, int elementCheck ) {
    int count = 0;
    for (int i = 0; i < arrayLength; i++) {
        if (array[i] == elementCheck) {
            count++;
        }
    }
    return count;
}

int main() {
    int elements;
    int elementCheck;
    int count = 0;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &elements);

    int array[elements];

    for (int i = 0; i < elements; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &array[i]);
    }

    int maxCount = 0;
    int mostFrequent = array[0];

    for (int i = 0; i < elements; i++) {
        elementCheck = array[i];
        int result = countDuplicate(array, elements, elementCheck);

        if (result > maxCount) {
            maxCount = result;
            mostFrequent = elementCheck;
        }
    }

    printf("Phan tu xuat hien nhieu nhat la: %d \n", mostFrequent);

    return 0;
}
