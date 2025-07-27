#include <stdio.h>



int swap(int i, int j);
int partition(int n, int arr[n]);
void quicksort(int arr[], int low, int high);


int main()
{
    int n, index_partition;
    
    printf("Print the number of elements of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the numbers to be sorted: ");
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    int low = 0;
    int high = n - 1;
    
    
    idx_partition = partition(n, arr);
    
    quicksort(arr, 0, n - 1);
    
    
    return 0;
}



int partition(int n, int arr[n]) {
    int pivot = arr[n - 1];
    int i = -1;
    int temp;

    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] <= pivot) {
            i++;
            // swap arr[i] and arr[j]
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // swap arr[i+1] and pivot (arr[n - 1])
    temp = arr[i + 1];
    arr[i + 1] = arr[n - 1];
    arr[n - 1] = temp;

    return i + 1; // pivot's final position
}

void quicksort(int arr[], int low, int high){
    
    
}
