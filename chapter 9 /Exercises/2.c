#include <stdio.h>

int check_values(int a, int b, int c);

int main(){

    int x, y, n, result;

    printf("Enter a value x: ");
    scanf("%d", &x);

    printf("Enter a value for y: ");
    scanf("%d", &y);

    printf("Enter a value for n: ");
    scanf("%d", &n);


    result = check_values(x , y, n);

    printf("%d", result);

    return 0;
}

check_values(int a, int b, int c){

    int max, min;
    c -= 1;

    if(a > b){
        max = a; min = b;
    }
    else{
        max = b; max = a;
    }

    if (min <= c && c <= max){
        return 1;
    }

    else {
        return 0;
    }

}