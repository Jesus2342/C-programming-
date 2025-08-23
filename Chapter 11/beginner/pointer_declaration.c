#include <stdio.h>

int main(){

    int a = 42;
    int *p = &a;

    printf("Value of a is %d\n", a);
    printf("Value acccessed via pointer is %d\n", *p);

    return 0;
}