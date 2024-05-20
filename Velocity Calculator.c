#include <stdio.h>
#include <math.h>

int main(){

    int choices;
    float d, t, v;

    do{
        printf("---------------------------\n");
        printf("Average Velocity Calculator\n");
        printf("---------------------------\n");
        printf("\nPlease enter the distance between you and your destination in Kilometers:  ");
        scanf("%f", &d);
        printf("Please enter the total time between you and your destination in Hours:  ");
        scanf("%f", &t);
        v = d/t;
        printf("\nThe average velocity you take to travel to your destination based on your inputs is %.2f Km/H\n", v);

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

    }while(choices == 1);
    return 0;
}
