#include <stdio.h>
#define N 5

int *find_largest(int a[], int n);

int main(){

    int n = N;
    int *largest;
    int MyArray[N] = {5, 9, 1, 7, 87};
    

    largest = find_largest(MyArray, n);


    printf("\nThe first largest is  %d\n", *largest);
    return 0;
}

int *find_largest(int a[], int n){
    
    int *max = &a[0];

    /* int *max = 0 ***WRONG*** */
 

    for(int i = 0; i < n; i++){
        if(*max < a[i]){
            *max = a[i];
        }
    }

    return max;
}