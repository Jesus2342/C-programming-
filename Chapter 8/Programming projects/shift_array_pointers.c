#include <stdio.h>
#define N 5

void shift_array(int n, int arr[n]);

int main(){

    int n = N;
    int arr_a[N] = {5, 9 , 2, 1, 3};
    
    int *p = &arr_a[0];

    printf("Original array\n");
    for(p = arr_a; p < arr_a + N; p++){
        printf("%d ", *p);
    }

    printf("\nModified array\n");
    shift_array(n, arr_a);

    for(p = arr_a; p < arr_a + N; p++){
        printf("%d ", *p);
    }
    

    return 0;
}

void shift_array(int n, int arr[n]){
    
    /* array_a = {{5, 9 , 2, 1, 3}}
    
    temp = array_a[0];

    p1 = 0, p2 = 0      
    arr_a[0] = arr[1]

    p = 1, p2 = 2
    arr[1] = arr[2]
    
 
    
    */
    int *p1 = arr;
    int *p2 = arr;

    int temp;

    for(p1 = arr; p1 < arr + n; p1++ ){

        if (p1 == arr){
            temp = *p1;
            *p1 = *&arr[1];
            ++p2;
        }

        else if(p1 < arr + n - 1){
            *p1 = *(++p2);
        }

        else{
            *p1 = temp;
        }
    }

    



}