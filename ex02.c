#include <stdio.h>

int main(void) {

    int number[2] = {0};
    int temp;

    printf("Enter a number : ");
    scanf("%d", &number[0]);

    temp = number[0];
    while (temp != 0) {
        number[1] = number[1] * 10 + temp % 10;
        temp /= 10;
    }

    printf("The inverted number : %d", number[1]);

    return 0;
}