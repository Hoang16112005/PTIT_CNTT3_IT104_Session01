#include <stdio.h>

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
    int elements;
    int elementCheck;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &elements);
    int array[elements];
    for (int i = 0; i < elements; i++) {
        printf("Nhap phan tu thu %d cua mang: ", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < elements; i++) {
        printf("%d 2", array[i]);
    }
    printf(" Nhap phan tu can kiem tra");
    scanf("%d", &elementCheck);
    // gọi hàm đê số lan xuất hiện
    int result = countExist(array, elements, elementCheck);

    printf("So lan xuat hien cua phan tu %d la: %d", elementCheck, result);

    return 0;
}
