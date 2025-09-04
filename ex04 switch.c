#include <stdio.h>

int main (void){


    int num ;
    char note = '\0';


    printf("Please enter a number : ");
    scanf("%d",&num);
    while( num < 0 ||  num > 100 ){
        printf("Please enter a number between 0 and 100 : ");
        scanf("%d",&num);
    }
    switch (num){
        case 90  ... 100 :
        note = 'A';
        break;
        case 80  ... 89 :
        note = 'B';
        break;
        case 70  ... 79 :
        note = 'C';
        break;
        case 60  ... 69 : 
        note = 'D';
        break;
        case 0 ... 59 : 
        note = 'F';
        break;
    }

    printf("Litteral note : %c ",note);
    return 0;
}