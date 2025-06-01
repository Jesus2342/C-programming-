/*
Write a program that generates a "random walk" across a 10 x 10 array. The array will contain characters (all '.' initially). The program must randomly "walk" from element to element, always going up, down, left or right by one element. The elements visited by the program will be labeled with the letters A through Z, in the order visited. Here's an example of the desired output:

A . . . . . . . . .
B C D . . . . . . .
. F E . . . . . . .
H G . . . . . . . .
I . . . . . . . . .
J . . . . . . . Z .
K . . R S T U V Y .
L M P Q . . . W X .
. N O . . . . . . .
. . . . . . . . . .

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); 
    int i = 0, j = 0, row = 0, col = 0;
    int steps = 0;
    int letter = 'A';  
    int new_row = 0, new_col = 0;
    
    char matrix[10][10];

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            matrix[i][j] = '*';
    
    
    matrix[0][0] = letter; 

    int dir_row[4] = {-1, 1, 0, 0}; //up, down, left, right
    int dir_col[4] = {0 , 0, -1, 1}; // up, down, left, right

    while(letter < 'Z'){
        for (int attempts = 0; attempts < 4; attempts++){
        steps  = rand() % 4;
        new_row = row + dir_row[steps];
        new_col = col + dir_col[steps];
        
        if(new_row >= 0 && new_col >=0 && new_row < 10 && new_col < 10 && matrix[new_row][new_col]=='*'){
            letter++;
            matrix[new_row][new_col] = letter;
            row = new_row;
            col = new_col;
            break;
            }
        }
    }

       
    

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    








  
    
    
  
    

    return 0;
}