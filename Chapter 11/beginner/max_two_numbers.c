#include <stdio.h>

int *max_ptr(int *a, int *b);  //esto regresa una direccion, no un valor 

int main(){
    int x = 10, y = 20;

    int *MaxP;

    MaxP = max_ptr(&x, &y);

    printf("The max value is %d", *MaxP);

    return 0;
}

int *max_ptr(int *a, int *b){  

    if(*a > *b) // compara valores de a y b.
        return a;  // regresa la dirreccion de a
    else
        return b; // regresa la direccion de b 
}