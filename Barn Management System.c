#include <stdio.h>

struct barn{
    int id;
    float length, height, weight;
};

int main(){

    int n;
    printf("\nEnter how many cows will be added into the catalogue: ");
    scanf("%d", &n);

    struct barn undiksha[n];

    for (int i = 0; i < n; i++){
        printf("ID of cow: ");
        scanf("%d", &undiksha[i].id);
        printf("Length of cow: ");
        scanf("%f", &undiksha[i].length);
        printf("Height of Cow: ");
        scanf("%f", &undiksha[i].height);
        printf("Weight of Cow: ");
        scanf("%f", &undiksha[i].weight);
        printf("\n");
    }

    for(int i = 0;i<n;i++){
    printf("\nCow number %d is %d\n", i+1, undiksha[i].id);
    printf("Cow number %d is %.2f\n", i+1, undiksha[i].length);
    printf("Cow number %d is %.2f\n", i+1, undiksha[i].height);
    printf("Cow number %d is %.2f\n", i+1, undiksha[i].weight);
    }

    return 0;
}
