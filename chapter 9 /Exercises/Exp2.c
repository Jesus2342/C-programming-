#include <stdio.h>

int taxes_amount(int income);

int main()
{
    int x;
    
    printf("Enter your annual income: ");
    scanf("%d", &x);
    
    printf("Amount for taxes is %d ", taxes_amount(x));

    return 0;
}

int taxes_amount(int income){
    
    
    
    if(income <= 750){
        return income * 01;    
    }
    
    if(income > 750 && income <= 2250){
        return income * .02;
    }
    
    if(income > 2250 && income <= 3750){
        return income * .03;
    }
    
    if(income > 3750 && income <= 5250){
        return income * .04;
    }
    
    if(income > 5250 && income <= 7000){
        return income * .05;
    }
    
    if(income > 7000){
        return income * .06;
    }
    
    
}