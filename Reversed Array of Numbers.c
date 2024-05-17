#include <stdio.h>

int main(){

    int n;

    printf("\nHow many numbers you want to add? ");
    scanf("%d", &n);

    int nomer[n];

    printf("\nEnter %d number\n", n);
    for(int i = 0; i < n; i++){
        printf("Number %d: ", i+1);
        scanf("%d", &nomer[i]);
    }

    printf("\nThis is the reversed order of %d numbers earlier\n", n);
    for(int i = n-1; i >= 0; i--){
        printf("%d ", nomer[i]);
    }
    printf("\n");

    return(0);
}
