#include   <stdio.h>
#include   <stdbool.h>

int main(void) {
    bool digit_seen[10] = {false};
    int digit;
    long n  ;
    

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (digit_seen[i]) {
            printf("%d ", i);
        }
    }
  
    if (n > 0) {
        printf("Repeated digit\n",digit);
    } else {
        printf("No repeated digit\n");
    }

    return 0;
}