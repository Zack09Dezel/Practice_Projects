#include <stdio.h>
#include <math.h>

//Coomit trial

int main(){

    int x, choices;

    printf("\n---------------------------");
    printf("\nOdd and Even Number Checker");
    printf("\n---------------------------\n\n");
    
    do{
        printf("Enter the number you want to check: ");
        scanf("%i", &x);

        if(x % 2 == 0){ 
            printf("\n%i is an Even number\n", x);
        }else{	
            printf("\n%i is an Odd number\n", x);
        }
            
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
