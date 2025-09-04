#include <stdio.h>

int main (void){


    int num ;
    char note = '\0';


    printf("Please enter a number : ");
    scanf("%d",&num);
    while( num < 0 && num > 100 ){
        printf("Please enter a number between 0 and 100 : ");
        scanf("%d",&num);
    }

    return 0;
}