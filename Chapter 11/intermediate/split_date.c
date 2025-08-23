#include <stdio.h>


void split_date(int total_days, int *p_month, float *p_days);


int main(){

    int total_days = 135, months = 0;
    float days = 0;

    split_date(total_days, &months, &days);


    printf("\n Months elapsed: %d\n", months);
    printf("\n Days elapsed: %.0f\n", days);

    return 0;
}

void split_date(int total_days, int *p_month, float *p_days){

    *p_month = total_days / 30;
    *p_days = (float)(total_days % 30);
   
}
