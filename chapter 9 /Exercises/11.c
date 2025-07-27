
#include <stdio.h>
#include <ctype.h>


float compute_GPA(char grades[], int n);

int main()
{
    int n, index = 0;
    
    float result, average;

   
   printf("Enter the number of grades: ");
   scanf("%d", &n);

   char grades[n];
   
   for(int i = 0; i < n; i++){
       printf("Enter the grade %d: ", i + 1);
       scanf(" %c", &grades[i]); // Use " %c" to skip whitespace
   }
   
   result = compute_GPA(grades, n);
   
   average = result / n;
   
   printf("The average would be %.2f", average);
   
   


    return 0;
}

float compute_GPA(char grades[], int n){
    
    
    
    if (n != 0){
        
        switch(toupper(grades[n - 1])){
            
            case 'A':
            return 4 + compute_GPA(grades, n - 1);
            
            case 'B':
            return 3 + compute_GPA(grades, n - 1);
            
            case 'C':
            return 2 + compute_GPA(grades, n - 1);
            
            case 'D':
            return 1 + compute_GPA(grades, n - 1);
            
            case 'F':
            return 0 + compute_GPA(grades, n - 1);
            
        }
        
    }
    
    
    else {
        return 0;
    }
    
}