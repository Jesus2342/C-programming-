#include <stdio.h>

void swap_values(int *a, int *b);


int main(){

    int x = 2, y = 8;

    swap_values(&x, &y);

    printf("value of x is %d\n", x);
    printf("value of y is %d\n", y);

    return 0;
}

void swap_values(int *a, int *b){

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
 
}

