#include <stdio.h>

int main(){
    int var = 100, *p = &var;

    *p += 100;

    printf("\nModified value of var is %d", var);
    return 0;
}