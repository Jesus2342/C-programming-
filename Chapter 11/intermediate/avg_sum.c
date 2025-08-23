#include <stdio.h>
#define N 5

void avg_sum(int a[], int n, double *avg, int *sum);

int main(){

    int n = N, suma = 0;
    double average = 0;
    int MyArray[N] = {5, 5, 5, 5, 5};
    

    avg_sum(MyArray, n, &average, &suma);


    printf("Average in the array is %lf\n", average);
    printf("Sum in the array is is %d\n", suma);
    return 0;
}

void avg_sum(int a[], int n, double *avg, int *sum){
    
    for(int i = 0; i < n; i++){
        *sum += a[i];
    }

    *avg = (double)*sum / n;

}