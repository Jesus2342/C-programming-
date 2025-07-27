#include <stdio.h>
#include <stdbool.h>


void storage_array(int a[], int n);
bool has_zero(int a[], int n);

int main()
{
    int a[10] = {0};
    
    int n;
    
     printf("Enter the max number of the array: ");
     scanf("%d", &n);
    
    storage_array(a, n);
    

    
    if( has_zero(a, n)){
        printf("at least one element has the value zero");
    }  
    
    else{
        printf("all values are different from zero");
    }

    return 0;
}

void storage_array(int a[], int n){
    
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }
}
bool has_zero(int a[], int n){
    
      bool aux = false;    // all elements are different from zero
      for(int i = 0; i < n; i++){
        
        if(a[i] == 0){
            return true;
        }
        
    }
    
    return false;
    
}
    
 

   

