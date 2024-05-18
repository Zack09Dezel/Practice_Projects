#include <stdio.h>
#include <stdbool.h>

int main(){
    bool flag;
    int input[4], binary;

    printf("Input(in binary): ");
    scanf("%d", binary);
    // if()
    for(int i = 3; i >= 0; i--){
        if(flag = true){
            for(int j = 0; j < i; j++){
                binary *= 2;
            }
        }else{
            continue;
        }    
    }

    return 0;
}
