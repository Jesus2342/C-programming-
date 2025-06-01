/*
Modify Programming Project 4 from Chapter 7 so that the program labels its output:

Enter phone number: 1-800-COL-LECT
In numeric form: 1-800-265-5328
The program will need to store the phone number (either in its original form or in its numeric form) in an array of character until it can be printed. You may assume that the phone number is no more than 15 characters long.


*/


#include <stdio.h>
#include <ctype.h>


int main()
{

    
    char arr[15];
    int i;
    char input[100];
    
      for (i = 0; i < 15; i++){
        arr[i] = '.';    
          
      }
    printf("Enter the number to process: ");
    fgets(input, sizeof(input), stdin);
    
    for (i = 0; i < 15; i++){
        
        char ch = toupper(input[i]);

        switch (ch)
        {
        case 'A': case 'B': case 'C':
            arr[i] = '2';
            break;
        case 'D': case 'E': case 'F':
            arr[i] = '3';
            break;
        case 'G': case 'H': case 'I':
            arr[i] = '4';
            break;
        case 'J': case 'K': case 'L':
            arr[i] = '5';
            break;
            case 'M': case 'N': case 'O':
            arr[i] = '6';
            break;
        case 'P': case 'R': case 'S':
            arr[i] = '7';
            break;
        case 'T': case 'U': case 'V':
            arr[i] = '8';
            break;
        case 'W': case 'X': case 'Y':
            arr[i] = '9';
            break;
        default:
            arr[i] = ch;
            break;
        }
    }
    
      for (i = 0; i < 15; i++){
        printf("%c", arr[i]);    
      }

    return 0;
}