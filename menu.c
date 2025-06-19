#include <stdio.h>
#include <stdlib.h>

void menu() {
    printf("\n ==== MENU ==== \n");
    printf("1. Enter array\n");
    printf("2. Print array\n");
    printf("3. Add element\n");
    printf("4. Delete element\n");
    printf("5. Update element\n");
    printf("6. Exit\n");
}

/**
 *
 * @param array Mảng thêm phần tử vào trong mảng
 * @param quantity Số lượng phần tử của mảng
 */
void importArray(int **array, int *quantity) {
    printf("Enter number of elements: ");
    scanf("%d", quantity);

    if (*quantity < 0) {
        printf("Invalid quantity\n");
        return;
    }

    //cap phat bo nho cho mang
    *array = (int *) malloc(*quantity * sizeof(int));

    //liem tra cap phat co thanh cong khong
    if (array == NULL) {
        printf("Not enough memory \n");
    }

    //them phan tu vao trong mang
    for (int i = 0; i < *quantity; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &(*array[i]));
    }
}


void printArray(int *array, int quantity) {
    if (array == NULL || quantity == 0) {
        printf("Mang rong\n");
        return;
    }

    printf("Print array : ");
    for (int i = 0; i < quantity; i++) {
        printf("%d ", array[i]);
    }
}


int main() {
    int choice;
    ;int array;
    int quantityElement;
    do {
        menu();
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                importArray(&array, &quantityElement);
                break;
            case 2:
                printf("Print array : ");
                break;
            case 3:
                printf("Enter element : ");
                break;
            case 4:
                printf("Add element : ");
                break;
            case 5:
                printf("Delete element : ");
                break;
        }
    }while(choice != 0);
}
