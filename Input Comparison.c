#include <stdio.h>
#include <math.h>

int main(){
    
    float a, b;
    int choice;

    do{
        printf("-----------------\n");
        printf("Number Comparison\n");
        printf("-----------------\n\n");
        printf("Enter the first number please: ");
        scanf("%f", &a);
        printf("Enter the second number please: ");
        scanf("%f", &b);

        if(a == b){
            printf("%.2f is equal to %.2f\n", a, b);
        }else if(a > b){
            printf("%.2f is greater than %.2f\n", a, b);
        }else{
            printf("%.2f is less than %.2f\n", a, b);
        }

        while(1){
            printf("\nAgain?\n");
            printf("1. Yes\n2. No\n");
            scanf("%d", &choice);
            if(choice==1 || choice==2){
                break;
            }else{
                printf("\nThat was incorrect, please choose between continuing or not");
            }
            
        }
    }while(choice == 1);
    return 0;
}
