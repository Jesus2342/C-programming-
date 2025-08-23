#include <stdio.h>
#define N 5

void find_two_largest(int a[], int n, int*p_largest, int *p_second_largest);

int main(){

    int n = N;
    int largest, second_largest;
    int MyArray[N] = {5, 9, 1, 7, 87};
    

    find_two_largest(MyArray, n, &largest, &second_largest);


    printf("\nThe first largest is  %d\n", largest);
    printf("The second largest is  %d\n", second_largest);
    return 0;
}

void find_two_largest(int a[], int n, int*p_largest, int *p_second_largest){
    
    *p_largest = 0;
    *p_second_largest = 0;
     

    for(int i = 0; i < n; i++){
       if(*p_largest < a[i])
        *p_largest = a[i];
    }

    for(int i = 0; i < n; i++){
        if((*p_second_largest < a[i]) && (*p_largest) != a[i])
         *p_second_largest = a[i];
     }
        

}