#include <stdio.h>

#define MAX_LENTGH 10

int my_array[MAX_LENTGH] = {34, 82, 49, 102, 7, 94, 23, 11, 50, 11};


int main(){
    int index;

    for (index = MAX_LENTGH - 1; index >= 0; index--){
        printf("%d", my_array[index]);
        printf("\n");
    }

    return 0;
}