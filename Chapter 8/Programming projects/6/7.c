/*
Write a program that reads a 3 x 3 array of integers and then prints the row sums and the column sums:

Enter row 1: 8 3 9 
Enter row 2: 3 5 3
Enter row 3: 2 8 1
*/

#include <stdio.h>

int main()
{
    int sum_rows = 0, sum_col = 0;
    int matrix[3][3];
    int i, j = 0;
    
    printf("Enter the rows: ");
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    
    
   for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
           sum_rows += matrix[i][j];
           sum_col += matrix[j][i];
        }
        
        printf("Row totals %d\n", sum_rows);
        sum_rows = 0;
        printf("Columns totals %d\n", sum_col);
        sum_col = 0;
        
    }
    

    return 0;
}