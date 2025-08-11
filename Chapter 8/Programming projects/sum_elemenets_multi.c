#include <stdio.h>

int main(){

    int num_rows = 3, num_cols = 3, sum_rows = 0, sum_col = 0;

    int my_matrix[3][3] = {{1, 2, 4},
                           {5, 4, 2},
                           {3, 5, 1}};

    
                           
    for(int row = 0; row < num_rows; row++){
        for(int col = 0; col < num_cols; col++){
            sum_rows += my_matrix[row][col];
        }
        printf("Sum of row %d: %d\n", row, sum_rows);
        sum_rows = 0;
    }
    
    printf("\n");


    for(int col = 0; col < num_cols; col++){
        for(int row = 0; row < num_rows; row++){
            sum_col += my_matrix[row][col];
        }
        printf("Sum of col %d: %d\n", col, sum_col);
        sum_col = 0;
    }





    return 0;
}