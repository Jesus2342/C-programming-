#include <stdio.h>

#define N 10

void max_min(int arr[], int n, int *max, int *min);

int main(void){
    
    
    int myarray[N] = {34, 82, 49, 102, 7, 944, 23, 11, 50, 2};

    int i, big, small;

    max_min(myarray, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);
    
    return 0;
}

void max_min(int arr[], int n, int *max, int *min){
    int i;

    *max = *min = arr[0];

    for(i = 1; i < n; i++){
        if(arr[i] > *max){
            *max = arr[i];
        }
        else if(arr[i] < *min){
            *min = arr[i];
        }
    }
}
