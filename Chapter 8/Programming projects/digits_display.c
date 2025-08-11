#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 20

int arr_digits[MAX_LENGTH];
int segments[10][7] = {
    {1,1,1,1,1,1,0},
    {0,1,1,0,0,0,0},
    {1,1,0,1,1,0,1},
    {1,1,1,1,0,0,1},
    {0,1,1,0,0,1,1},
    {1,0,1,1,0,1,1},
    {1,0,1,1,1,1,1},
    {1,1,1,0,0,0,0},
    {1,1,1,1,1,1,1},
    {1,1,1,1,0,1,1}
};

void storage_arr(char digits[]) {
    int len = strlen(digits);
    int index = 0;
    for (int i = 0; i < len; i++) {
        if (isdigit(digits[i])) {
            arr_digits[index++] = digits[i] - '0';
        }
    }
    arr_digits[index] = -1; // end marker
}

void printing_arr(int digits_array[]) {
    // Row 1
    for (int i = 0; digits_array[i] != -1; i++)
        printf(" %c ", segments[digits_array[i]][0] ? '_' : ' ');
    printf("\n");

    // Row 2
    for (int i = 0; digits_array[i] != -1; i++)
        printf("%c %c", segments[digits_array[i]][5] ? '|' : ' ',
                        segments[digits_array[i]][1] ? '|' : ' ');
    printf("\n");

    // Row 3
    for (int i = 0; digits_array[i] != -1; i++)
        printf(" %c ", segments[digits_array[i]][6] ? '_' : ' ');
    printf("\n");

    // Row 4
    for (int i = 0; digits_array[i] != -1; i++)
        printf("%c %c", segments[digits_array[i]][4] ? '|' : ' ',
                        segments[digits_array[i]][2] ? '|' : ' ');
    printf("\n");

    // Row 5
    for (int i = 0; digits_array[i] != -1; i++)
        printf(" %c ", segments[digits_array[i]][3] ? '_' : ' ');
    printf("\n");
}

int main() {
    char user_digit[] = "983-234-1223";
    storage_arr(user_digit);
    printing_arr(arr_digits);
    return 0;
}
