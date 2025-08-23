#include <stdio.h>

void pay_amount(int dollars, int *p_twenties, int *p_tens, int *p_fives, int *p_ones);

int main(){
    
    int dollar_amount = 867, twenties = 0, tens = 0, fives = 0, ones = 0;
    
    pay_amount(dollar_amount, &twenties, &tens, &fives, &ones);

    printf("\n $20 bills: %d", twenties);
    printf("\n $10 bills: %d", tens);
    printf("\n $5 bills: %d", fives);
    printf("\n $1 bills: %d", ones);

    return 0;

}
void pay_amount(int dollars, int *p_twenties, int *p_tens, int *p_fives, int *p_ones){

    *p_twenties = dollars / 20;

    *p_tens = (float)(dollars % 20) / 10;

    *p_fives = (float)((dollars % 20) % 10) / 5;

    *p_ones = dollars - (*p_twenties * 20) - (*p_tens * 10) - (*p_fives * 5);


}