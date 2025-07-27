#include <stdio.h>

int power(int a, int n);

int main()
{
    int number, exponent, result;
    
    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    s
    result = power(number, exponent);
    
    printf("Current result is %d", result);
    
    
    return 0;
}

int power(int a, int n){
     
    if(n == 0){
        return 1;
    }
    
    else if(n % 2 == 0){
        int temp = power(a , n / 2);
        return temp * temp;
    }
    
    else{
        return a * power(a, n - 1);
    }
    
}
