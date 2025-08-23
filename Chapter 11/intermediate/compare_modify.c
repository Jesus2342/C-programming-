#include <stdio.h>

void compare_and_set(int *a, int *b);

int main(){

    int x = 3, y = 8;

    compare_and_set(&x, &y);
    printf("value of y is %d", y);

    return 0;
}

void compare_and_set(int *a, int *b){
    if(*a < *b){
        *b = *a;
    }

}