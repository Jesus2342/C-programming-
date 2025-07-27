
#include <stdio.h>

int digit(int n, int m, int index, int aux);

int main()
{
    int n, m , index = 0, aux, result;
    
    printf("Enter the first number: ");
    scanf("%d", &n);
    
    printf("Enter the second number: ");
    scanf("%d", &m);
    
    result = digit(n, m, index, aux);
    
    printf("Number of digits in n is: %d", result);

    return 0;
}

int digit(int n, int m, int index, int aux){
   
    
    if(m != index){
        
        aux = n % 10;

        n = n / 10;
        
        index += 1;
        
        return digit(n , m, index, aux);
    }
    
    else{
        return aux;
    }
}