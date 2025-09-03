#include <stdio.h>

int calc(int num) {
    int x = 0;
    if (num == 0) {
        x = 1;
    }
    while (num != 0) {
        num = num / 10;
        x++;
    }
    return x;
}

int main(void) {
    int n1, n2, n3, n4, n5;
    int calcu;

    printf("Enter ISBN : ");
    scanf("%d-%d-%d-%d-%d", &n1, &n2, &n3, &n4, &n5);

    while (n1 != 978 && n1 != 979) {
        printf("invalid, GS1 value must be either 978 or 979 ! \n");
        printf("Please enter ISBN again : \n");
        scanf("%d-%d-%d-%d-%d", &n1, &n2, &n3, &n4, &n5);
    }

    calcu = calc(n1) + calc(n2) + calc(n3) + calc(n4) + calc(n5);
    while (calcu != 13) {
        printf("ISBN must contain 13 digits \n");
        printf("Please enter ISBN again : ");
        scanf("%d-%d-%d-%d-%d", &n1, &n2, &n3, &n4, &n5);
        while (n1 != 978 && n1 != 979) {
            printf("invalid, GS1 value must be either 978 or 979 ! \n");
            printf("Please enter ISBN again : \n");
            scanf("%d-%d-%d-%d-%d", &n1, &n2, &n3, &n4, &n5);
        }
        calcu = calc(n1) + calc(n2) + calc(n3) + calc(n4) + calc(n5);
    }

    printf("Prefix of GS1 : %d \n", n1);
    printf("Groupe id : %d \n", n2);
    printf("Editor's code  : %d \n", n3);
    printf("Article number  : %d \n", n4);
    printf("control number : %d \n", n5);

    return 0;
}