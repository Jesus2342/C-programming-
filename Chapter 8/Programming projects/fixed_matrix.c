#include <stdio.h>

int main(){
    int rows = 5, cols = 4;
    
    int my_matrix[5][4] = {{1, 0, 0, 2},
                           {3, 2, 2, 1},
                           {4, 3, 2, 1},
                           {3, 5, 6, 7},
                           {9, 2, 5, 3}};

    for(int row = 0; row < 5; row++){
        for (int  col = 0; col < 4; col++){
            printf("%d ", my_matrix[row][col]);
        }
        printf("\n");
    }


    return 0; 
}