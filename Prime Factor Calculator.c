#include <stdio.h>

void primeFactor(int number){
    printf("Prime factor of %d: ", number);
    for (int i = 2; i <= number; ++i){
        while (number % i == 0){
            printf("%d ", i);
            number /= i;
        }
    }
    printf("\n");
}

int main() 
{
    int number;

    printf("Input the number: ");
    scanf("%d", &number);
    primeFactor(number);

    return 0;
}
