#include <stdio.h>

double triangle_area(double base, double height);

int main()
{
    double base = 0, height = 0, result = 0;
    
    printf("Enter the base: ");
    scanf("%lf", &base);
    
    printf("Enter the height: ");
    scanf("%lf", &height);
    
    result = triangle_area(base, height);
    
    printf("triangle area is %lf " ,result);
    
    
    
    return 0;
}

double triangle_area(double base, double height){
    
    double product;
    
    product = (base * height) / 2;
    
    return product;
}
