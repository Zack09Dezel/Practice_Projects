#include <stdio.h>
#include <math.h>

int main(){

    int choices;  
    double gravity, height, velocity;
    gravity = 9.8; 

    do{
        printf("\n---------------------------------------");
        printf("\nAn Object's Falling Velocity Calculator\n");
        printf("---------------------------------------\n");
        printf("\nEnter the height at which the object was dropped in meters: ");
        scanf("%lf", &height);
        velocity = sqrt(2*gravity*height);
        printf("\nThe velocity is: %.2f m/s", velocity);

        while(1){
            printf("\nAgain?\n");
            printf("1. Yes\n2. No\n");
            scanf("%d", &choices);

            if(choices==1 || choices==2){
                break;
            }else{
                printf("\nThat was incorrect, please choose between continuing or not");
            }
        } 
    }while(choices==1);
    return 0;
}
