#include <stdio.h>

int main(){
    int num_rows = 3, num_cols = 3;

    int col = 0;
    
    int my_matrix[3][3] = {{1, 0, 0},
                           {3, 2, 2},
                           {4, 3, 2}};
    
    int matrix_tran[3][3] ={{0, 0, 0},
                             {0, 0, 0},
                             {0,0,0}};

    for(int row = 0; row < num_rows; row++){
        for(col = 0; col < num_cols; col++){
            matrix_tran[row][col] = my_matrix[col][row];
        }
    }

    for(int row = 0; row < num_rows; row++){
        for(col = 0; col < num_cols; col++){
            printf("%d ", matrix_tran[row][col]);
        }
        printf("\n");
    }






 
    
    return 0;
}