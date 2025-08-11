#include <stdio.h>
#include <limits.h>

const int test_array[] = {21, 213, 923, 1231, 53, 98, 32, 13, 1002};
const int arr_length = sizeof(test_array) / sizeof(test_array[0]);

int find_max(const int arr[]);
int find_min(const int arr[]);



int main(){
    
    printf("The max value of the array is %d\n", find_max(test_array));
    printf("The min value of the array is %d\n", find_min(test_array));
    return 0;
}

int find_max(const int arr[]){
    int max = INT_MIN;

    for(int index = 0; index < arr_length; index++){
        if(max < arr[index]){
            max = arr[index];
        }
    }
    return max;
}

int find_min(const int arr[]){
    int min = INT_MAX;

    for(int index = 0; index < arr_length; index++){
        if(min > arr[index]){
            min = arr[index];
        }
    }
    return min;
}