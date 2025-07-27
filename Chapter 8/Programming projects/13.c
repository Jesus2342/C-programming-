#include <stdio.h>
#include <string.h>

int main()
{
    char message[40];
    char sentence[20];
    char point[1];
    int indices_arr[10], length_words[10];
    
    
    printf("Enter a message: ");
    
    fgets(message, sizeof(message), stdin);
    
    message[strcspn(message, "\n")] = '\0'; //Replace new line with a \0
    
    
    sscanf(message, "%[^!.?]%c", sentence, point); //Split the message in two arrays
    // %[^!.?]%c - Read everything up to a "!" OR "." OR "?"
    
    
    int len = strlen(sentence);
    
    int count = 0, j = 0;
    
    for(int i = 0; i <= len; i++){
        
       if(sentence[i] != ' '){
           indices_arr[j] = i; 
       }
       while(sentence[i] != ' ' && sentence[i] != '\0'){
            count++;
            i++;
           
           
       }
       
       length_words[j] = count;
       count = 0;
       j++;
           
        
    }
    
   
    return 0;
}