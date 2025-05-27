/*
the prototypical Internet newbie is a fellow named BIFF, who has a unique way of writing messages. Here's a typical BIFF communiqué:

H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
Write a "BIFF filter" that reads a message entered by the user and translates it into BIFF-speak:

Enter message: Hey dude, C is rilly cool
In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!


*/


#include <stdio.h>

int main() {
    char message[100];
    int i;

    printf("Enter your message: ");
    scanf(" %[^\n]", message);  

    for(i = 0; i < 100; i++){
      switch(message[i]){
          case 'A':
          message[i] = '4';
          break;
          
          case 'B':
          message[i] = '8';
          break;
          
          case 'E':
          message[i] = '3';
          break;
          
          case 'I':
          message[i] = '1';
          break;
          
          case 'O':
          message[i] = '0';
          break;
          
          case 'S':
          message[i] = '5';
          break;
          
      }
    }
    
    printf("******BIFF filter*****\n");
    printf("%s", message);
    return 0;
}
