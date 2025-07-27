#include <stdio.h>

int gdc(int a, int b);

int main(){

    int m, n, result;
    printf("Enter a the first number: ");
    scanf("%d", &m);

    printf("Enter the second number: ");
    scanf("%d", &n);

    result = gdc(m, n);

    printf("GDC is %d", result);
    return 0;
}

int gdc(int m, int n){
    int reminder;
    
    while(n != 0){
        reminder =  m % n;
        m = n;
        n = reminder;
        
    }

    return m;
}