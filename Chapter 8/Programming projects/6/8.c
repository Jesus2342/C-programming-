/*
Modify Programming Project 7 so that it prompts for three quiz grades for each of three students, then computes the total score and average score for each student, and the average score, high score, and low score for each quiz.
*/

#include <stdio.h>

int main()
{
    int sum_rows = 0, sum_col = 0, higher_grade = 0, lowest_grade = 10;
    int grades[3][3];
    float average = 0;
    int i, j = 0;
    
    printf("Enter the rows: ");
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &grades[i][j]);
        }
    }
    
    
   for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
           sum_rows += grades[i][j];
           average = sum_rows / 3;
           
           if(higher_grade < grades[i][j]){
               higher_grade = grades[i][j];
           }
          
           
           if(lowest_grade > grades[i][j]){
               lowest_grade = grades[i][j];
           }
           
           
        }
        
        printf("Student %d average score: %.2f\n, higher_grade: %d\n, lowest_grade: %d\n", i+1, average, higher_grade, lowest_grade);
        sum_rows = 0;
        higher_grade = 0;
        lowest_grade = 10;
        
    }
    

    return 0;
}