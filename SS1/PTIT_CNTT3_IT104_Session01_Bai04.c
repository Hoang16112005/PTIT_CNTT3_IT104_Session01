#include <stdio.h>

//O(n)
int main() {
    int lastNum;
    printf("Enter the last number: ", &lastNum);
    scanf("%d", &lastNum);
    int sum = 0;
    for (int i = 1; i <= lastNum; i++) {
        sum += i;
    }
    printf("Sum from 1 to %d is %d", lastNum, sum);
}
