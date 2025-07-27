#include <stdio.h>

int num_digits(int n, int digits);

int main()
{
    int n, result, digits = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    result = num_digits(n, digits);
    
    printf("Number of digits in n is: %d", result);

    return 0;
}

int num_digits(int n, int digits){
   
    
    if(n != 0){
        
        digits += 1;
        n = n / 10;
        
        
        return num_digits(n, digits);
    }
    
    else{
        return digits;
    }
}