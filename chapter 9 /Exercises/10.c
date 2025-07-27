#include <stdio.h>


int largest(int a[], int index, int n, int max);

float average(int a[], int index, int n, float average_aux);

int main()
{
    int n, max_array;
    
    int index = 0, max = 0;
    
    float average_aux = 0, average_arr = 0;
    
    printf("Enter the max number of elements in the array:   ");
    scanf("%d", &n);
    
    int a[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    max_array = largest(a, index, n, max);
    average_arr = average(a, index, n, average_aux);
    
    
    printf("Max number of array is %d \n", max_array);
    printf("Average of array is %f \n ", average_arr);

    return 0;
}

int largest(int a[], int index, int n, int max){
    
    if(index != n){
        
        if(a[index] > max){
            max = a[index];
        }
        
        return largest(a, index + 1, n, max);
    }
    
    else{
        return max;
    }
    
}

float average(int a[], int index, int n, float average_aux){
    
    if(index != n){
        
        
        average_aux += a[index];
        
        return average(a, index + 1, n, average_aux);
    }
    
    else{
        return average_aux / n;
    }
    
}