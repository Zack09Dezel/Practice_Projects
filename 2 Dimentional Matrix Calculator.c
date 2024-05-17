#include "stdio.h"

//Spaced widely for better readability
int main(){

    int row, column;
    scanf ("%d %d\n", &row, &column);
    int matrix1[row][column], matrix2[row][column], result[row][column];

    //--------------------------------------------------------------------

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    //--------------------------------------------------------------------

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    //--------------------------------------------------------------------

    for(int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    //--------------------------------------------------------------------

    for(int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%d\t", result[i][j]);
        }printf("\n");
    }

    //--------------------------------------------------------------------

    return (0);

}
