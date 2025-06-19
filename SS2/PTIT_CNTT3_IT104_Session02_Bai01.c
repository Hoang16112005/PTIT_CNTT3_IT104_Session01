#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhap so luong phan tu : ");
    scanf("%d", &n);
    int *array = (int*)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Enter elements %d:", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    int max = array[0];
    for (int i = 0; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
            array[i] = max;
        }
    }
    printf("The largest element is %d", max);
    free(array);
}
