#include   <stdio.h>
#include   <stdbool.h>

int main(void) {
    int digit_count[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    long temp = n;
    while (temp > 0) {
        digit = temp % 10;
        digit_count[digit]++;
        temp /= 10;
    }
    bool repeated = false;
    printf("Repeated digits: ");
    for (int i = 0; i < 10; i++) {
        if (digit_count[i] > 1) {
            printf("%d ", i);
            repeated = true;
        }
    }
    if (!repeated) {
        printf("None");
    }
    printf("\n");

    return 0;
}