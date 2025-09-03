#include <stdio.h>

int main(void){

    int n1, n2, n3, n4,n5;

    printf("Enter ISBN : ");
    scanf("%d-%d-%d-%d-%d", &n1, &n2, &n3, &n4,&n5);
    while (n1 != 978 && n1 != 979) {
        printf("invalid, GS1 value must be either 978 or 979 ! \n");
        printf ("Please enter ISBN again : \n");
        scanf("%d-%d-%d-%d-%d", &n1, &n2, &n3, &n4,&n5);
    }
    printf("Prefix of GS1 : %d \n",n1);
    printf("Groupe id : %d \n",n2);
    printf("Editor's code  : %d \n",n3);
    printf("Article number  : %d \n",n4);
    printf("control number : %d \n",n5);

    return 0;
}