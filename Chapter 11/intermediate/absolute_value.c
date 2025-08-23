#include <stdio.h>

void make_absolute(int *x);

int main(){

    int a = 3;

    make_absolute(&a);

    printf("the absolute value of a is %d", a);

    return 0;
}

void make_absolute(int *x){
    
    if(*x < 0)
        *x *= -1;

}