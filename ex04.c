#include <stdio.h>

int main (void){
    int dd , mm , yy , dd2 , mm2 , yy2;
    char date [25] ;


    do {
    printf("Enter a date in dd/mm/yy format : ");
    scanf("%d/%d/%d",dd,mm,yy);
    }
    while ( dd < 1 || dd > 31 || mm < 1 || mm > 12 || yy < 0 || yy > 99 );

    do {
    printf("Enter a date in dd/mm/yy format : ");
    scanf("%d/%d/%d",dd2,mm2,yy2);
    }
    while ( dd < 1 || dd > 31 || mm < 1 || mm > 12 || yy < 0 || yy > 99 );
    


    


    


    

    










    return 0;
}