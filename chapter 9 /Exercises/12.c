#include <stdio.h>

int inner_product(int a[], int b[], int n);


int main()
{
    int n, product;
    
    
    
    printf("Define the max number for arrays: ");
    scanf("%d", &n);
    
    int a[n], b[n];
    
    for(int i = 0; i < n; i++){
        printf("Assign the element %d for first array: ", i);
        scanf("%d", & a[i]);
    }
    
    for(int i = 0; i < n; i++){
        printf("Assign the element %d for second array: ", i);
        scanf("%d", & b[i]);
    }
    
    product = inner_product(a, b, n); 
    
    printf("The product of the two arrays is %d", product);

    return 0;
}


int inner_product(int a[], int b[], int n){
    
    if(n != 0){
        
        return a[n - 1] * b[n - 1] + inner_product(a,b, n - 1);
    }
    
    else{
        return 0;
    }
    
}