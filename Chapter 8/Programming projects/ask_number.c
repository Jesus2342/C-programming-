#include <stdio.h>
#include <stdbool.h>

bool search_element(int digit_to_find, const int arr[], const int arr_lenght);

int main(){
    
    const int my_array[] = {1, 23, 44, 29, 64, 12, 34, 98, 65, 4};
    const int length = sizeof(my_array)  / sizeof(my_array[0]);

    int user_digit = 23;

    if(search_element(user_digit, my_array, length)){
       printf("Digit was found");
    }

    else{
        printf("Digit was not found");
    }


    return 0;
}

bool search_element(int digit_to_find, const int arr[], const int arr_lenght){

    for (int i = 0; i < arr_lenght; i++){
        if(digit_to_find == arr[i]){
            return true;}
    }
    return false;


}