#include <stdio.h>
#include <stdbool.h>

int countDuplicate(int array[], int arrayLength, int elementCheck ) {
    int count = 0;
    for (int i = 0; i < arrayLength; i++) {
        if (array[i] == elementCheck) {
            count++;
        }
    }
    return count;
}

//O(n)
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


    bool visited[elements];
    for (int i = 0; i < elements; i++) {
        visited[i] = false;
    }

    for (int i = 0; i < elements; i++) {
        if (!visited[i]) {
            elementCheck = array[i];  // dùng lại biến elementCheck
            int result = countDuplicate(array, elements, elementCheck);

            if (result > 1) {
                count++;
            }

            for (int j = i; j < elements; j++) {
                if (array[j] == elementCheck) {
                    visited[j] = true;
                }
            }
        }
    }

    printf("Co %d phan tu bi trung lap trong mang.\n", count);

    return 0;
}
