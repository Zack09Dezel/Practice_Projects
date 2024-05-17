#include <stdio.h>

int main(){
    int grade;
    char choice;

    do{

        printf("\nThis is a grade calculator to determine the grade of a student\n");
        printf("\nInput the grade: ");
        scanf("%d", &grade);

        if(grade >= 0 && grade < 60){
            printf("Grade: D\n");
        }else if(grade >= 60 && grade < 75){
            printf("Grade: C\n");
        }else if(grade >= 75 && grade < 85){
            printf("Grade: B\n");
        }else if(grade >= 85 && grade <= 100){
            printf("Grade: A\n");
        }else{
            printf("Invalid number. Please enter a grade between 0 and 100.\n");
        }

        do {

        	printf("\nDo you want to enter another grade? (Y/N): ");
            scanf(" %c", &choice);

            if (choice != 'Y' && choice != 'N') {
                printf("\nPlease enter Y or N. ");
            }

        }while(choice != 'Y' && choice != 'N');

    }while(choice == 'Y');

    return 0;
}
