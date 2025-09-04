#include <stdio.h>

int main (void){
    int hour , min, time , hour2 , min2;
    
    int flights [2] [8]= {{480, 583, 679, 767, 840, 945, 1140, 1305},{616,712,811,900, 968, 1075, 1280, 1438}};
    printf("Enter a 24-hour time : ");
    scanf("%d:%d", &hour, &min);
    time = hour * 60 + min;
    for (int i = 0 ; i <= 7 ; i++ ){
        
        if ( flights [0][i] <= time ){
        
            hour2 = flights [0][i] / 60 ;
            min2 = flights [0][i] % 60;
            break;

        }
      
    }
      printf("closest flight : %d : %d ",hour2,min2);




    


return 0;
}
