#include <stdio.h>

int find_median(int x, int y, int z);

int main()
{
    
    int n1, n2, n3;
    
    printf("Enter the first number: ");
    scanf("%d", &n1);
    
    printf("Enter the second number: ");
    scanf("%d", &n2);
    
    printf("Enter the third number: ");
    scanf("%d", &n3);
    
    printf("El valor de la media es %d", find_median(n1,n2,n3));

    return 0;
}


int find_median(int x, int y, int z){
    
    if( x <= y && y <= z){
        return y;
    }
    
    if( y <= x && x <= z){
        return x;
    }
    
    if( x <= z && z <= y){
        return z;
    }
    
    
}

