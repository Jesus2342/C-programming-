#include <stdio.h>

void storage_array(int n, int a[n]);
void selection_sort(int n, int a[n]); //sort funtion does not return any value. 
void print_array(int n, int a[n]);



int main()
{
    int n;
    int a[10] = {0};
    
    printf("Max array length: ");
    scanf("%d", &n);
    
    storage_array(n, a);
    
    selection_sort(n, a);
    
    print_array(n, a);
    
    
    
    return 0;
}

void storage_array(int n, int a[n]){
    
    for(int i = 0; i < n; i++){
        
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }
    
}

void selection_sort(int n, int a[n]){
    
    int temp = 0;
    int max = a[0];
    int index = 0;
    
    if(n > 1) //case when you have more than one element in the array. Not necessay to sort. 
    {
        for(int i = 0; i < n; i++){
            
            if(max < a[i]){
                max = a[i];
                index =  i;
                
          
            }
            
        }
        
    
        temp = a[n - 1];
        a[n - 1] = max;
        a[index] = temp;
        
        return selection_sort(n - 1, a);
       
    }
    
}

    



void print_array(int n, int a[n]){
    
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}



