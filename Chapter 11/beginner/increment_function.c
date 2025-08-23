#include <stdio.h>


void increment(int *a);


int main(){

    int x = 8;

    while(x < 20){
        increment(&x);
    }
    
    printf("New value of x is %d ", x);
    return 0;
}

void increment(int *a){

    *a = *a +1;

}