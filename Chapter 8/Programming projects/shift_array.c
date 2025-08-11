#include <stdio.h>

void shift_array(const int arr[], const int length);

#define MAX_LENGHT 6

int main(){
    const int test_array[] = {21, 213, 923, 1231, 53, 98};
    const int length_arr = sizeof(test_array) / sizeof(test_array[0]); 

    shift_array(test_array, length_arr);
    
    return 0;
}

void shift_array(const int arr[], const int length){
    
    int shifted_arr[length];

    for(int i = 0; i < length; i++){

        if(i < length -1){
            shifted_arr[i] = arr[i + 1];
            continue;
        }
        shifted_arr[i] = arr[0]; 

    }

    for(int i = 0; i < length; i++){
        printf("%d\n", shifted_arr[i]);
    }

    
}