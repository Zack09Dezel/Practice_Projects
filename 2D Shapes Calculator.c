#include <stdio.h>
#include <math.h>

int main(){

    int ChosenNumber, choices;
    double width, length, base, height, area, side, radius, Pi;

    printf("\n--------------------\n");
    printf("2D Shapes Calculator\n");
    printf("--------------------\n\n");
    printf("There are 7 shapes in total.\n");
    printf("There are:\n\n");

    printf("1. Square.\n");
    printf("2. Rectangle.\n");
    printf("3. Triangle.\n");
    printf("4. Parallelogram.\n");
    printf("5. Rhombus.\n");
    printf("6. Trapezium.\n");
    printf("7. Circle.\n\n");

    do{
        printf("Choose which shape would you like to calculate: ");
        scanf("%d", &ChosenNumber);
            if(ChosenNumber == 1){
                printf("\nSide Unit: ");
                scanf("%lf", &side);
                area = side*side;
                printf("\nBased on your inputs, the area of your Square is %.2lf Unit\n", area);
            }else if(ChosenNumber == 2){
                printf("\nLength: ");
                scanf("%lf", &length);
                printf("Width: ");
                scanf("%lf", &width);
                area = length*width;
                printf("\nBased on your inputs, the area of your Rectangle is %.2lf Unit\n", area);
            }else if(ChosenNumber == 3){
                printf("\nBase Unit: ");
                scanf("%lf", &base);
                printf("Height: ");
                scanf("%lf", &height);
                area = base*height/2;
                printf("\nBased on your inputs, the area of your Triangle is %.2lf Unit\n", area);
            }else if(ChosenNumber == 4){
                printf("\nBase Unit: ");
                scanf("%lf", &base);
                printf("Height: ");
                scanf("%lf", &height);
                area = base*height;
                printf("\nBased on your inputs, the area of your Parallelogram is %.2lf Unit\n", area);
            }
            else if(ChosenNumber == 5){
                printf("\nFirst Diagonal Unit: ");
                scanf("%lf", &base);
                printf("Second Diagonal Unit: ");
                scanf("%lf", &height);
                area = base*height/2;
                printf("\nBased on your inputs, the area of your Rhombus is %.2lf Unit\n", area); 
            }else if(ChosenNumber == 6){
                printf("\nFirst Base Unit: ");
                scanf("%lf", &base);
                printf("Second Base Unit: ");
                scanf("%lf", &length);
                printf("Height Unit: ");
                scanf("%lf", &height);
                area = base*length/2*height;
                printf("\nBased on your inputs, the area of your Rhombus is %.2lf Unit\n", area); 
            }else if(ChosenNumber == 7){
                printf("\nRadius: ");
                scanf("%lf", &radius);
                Pi = 3.141593;
                area = radius*radius*Pi;
                printf("\nBased on your inputs, the area of your Circle is %.2lf Unit\n", area); 
            }else{
                printf("\nPlease choose between shape number 1-7!\n");
            }while(1){
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
