#include <stdio.h>

#define MAX_DIGITS 10

int test_number = 9;

char line1[100] = "";
char line2[100] = "";
char line3[100] = "";



//    a b c d e f g
int segments[10][7] = {
    {1,1,1,1,1,1,0}, // 0
    {0,1,1,0,0,0,0}, // 1
    {1,1,0,1,1,0,1}, // 2
    {1,1,1,1,0,0,1}, // 3
    {0,1,1,0,0,1,1}, // 4
    {1,0,1,1,0,1,1}, // 5
    {1,0,1,1,1,1,1}, // 6
    {1,1,1,0,0,0,0}, // 7
    {1,1,1,1,1,1,1}, // 8
    {1,1,1,1,0,1,1}  // 9
  };
  


void process_digit(int digit);


int main(){
    process_digit(test_number);
    return 0;
}

void process_digit(int digit){
    int temp[7] =  {0};

    switch (digit)
    {
    case 9:
        for(int i = 0; i < 7; i++){
            temp[i] = segments[9][i];
        }

       
        break;
    
    default:
        break;
    }

}
