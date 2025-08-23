#include <stdio.h>

int main(){
    int a = 5, b = 10, *p = &a;

    printf("Initial value of pointer %d\n", *p);

    p = &b;

    printf("After reassing the pointer %d\n", *p);


    return 0;
}
