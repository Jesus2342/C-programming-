#include <stdio.h>

#define MAX_LENGTH 6

const int test_array[MAX_LENGTH] = {1, 8, 23, 20, 120, 21};

// Function prototype
float calc_average(const int arr[MAX_LENGTH]);

int main(void) {
    float result = calc_average(test_array);
    printf("The average for the numbers is %.2f\n", result);
    return 0;
}

// Function definition
float calc_average(const int arr[MAX_LENGTH]) {
    int sum = 0;

    for (int index = 0; index < MAX_LENGTH; index++) {
        sum += arr[index];
    }

    return (float) sum / MAX_LENGTH;
}
