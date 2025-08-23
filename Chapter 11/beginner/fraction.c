#include <stdio.h>

void reduce(int numerator, int denominator, int *n, int *m);



int main(){

    char user_fraccion[5] = "6/12";
    int num, den, reduced_num, reduced_den;

    sscanf(user_fraccion, "%d/%d", &num, &den);

    reduce(num, den, &reduced_num, &reduced_den);
    
    printf("The reduced fraction would be %d/%d", reduced_num, reduced_den);

    return 0;
}

void reduce(int numerator, int denominator, int *n, int *m){
    int reminder, x, y, gdc;

    x = numerator;
    y = denominator;

    //calculate GDC 
    while(y != 0){
        reminder =  x % y;
        x = y;
        y = reminder;
    }

    gdc = x;

    *n = numerator / gdc;
    *m = denominator / gdc;
}
