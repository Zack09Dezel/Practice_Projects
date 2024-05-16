#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char choice;
    srand(time(NULL)); 

    do{
        printf("\nWelcome to Rock, Paper, Scissor game!\n");
        printf("Let's start, which one would you choose?\n\n");
        printf("1. Rock\n2. Paper\n3. Scissor\n");

        char player;
        int player_choice;

        do{
            printf("\nYour choice: ");
            scanf(" %c", &player); 
            if(player != '1' && player != '2' && player != '3'){
                printf("Invalid choice\n");
                continue; 
            }
            player_choice = player - '1'; 
        }while(player != '1' && player != '2' && player != '3');

        int computer = rand() % 3;

        printf("\nComputer chose: ");
        switch (computer) {
            case 0:
                printf("Rock!\n");
                break;
            case 1:
                printf("Paper!\n");
                break;
            case 2:
                printf("Scissor!\n");
                break;
        }

        if((player_choice == 0 && computer == 2) || 
            (player_choice == 1 && computer == 0) || 
            (player_choice == 2 && computer == 1)){
            printf("You win!\n");
        }else if((computer == 0 && player_choice == 2) || 
                   (computer == 1 && player_choice == 0) || 
                   (computer == 2 && player_choice == 1)){
            printf("You lose!\n");
        }else{
            printf("It's a tie!\n");
        }

        printf("\nWould you like to play again? (Y/N)");
        scanf(" %c", &choice); 

        if(choice != 'Y' && choice != 'N'){
            printf("Wrong choice\n");
        }

    }while(choice == 'Y');

    return 0;
}
