#include <stdio.h>
#include <string.h>

int main()
{
    char msg[20];
    int i = 0,  j =0;
    int starts[10];  //save where the first letter starts
    int length[10]; // save the length of the word
    int count = 0;
    int num_words = 0;
    
    
    for (i = 0; i < 20 ; i++){ //Initialize the char array 
        msg[i] = '.';
    }
    
       for (i = 0; i < 10 ; i++){ //Initialize the int arrays 
        starts[i] = 0;
        length[i] = 0;
    }
    
    printf("Enter a message: ");
    
    fgets(msg, sizeof(msg), stdin); //More efficcient than scanf
    
    msg[strcspn(msg, "\n")] = '.'; //
    
    for(i = 0; i < 20; i++){
        
        if(msg[i] != ' ' && msg[i] != '\0' && msg[i] != '.'){
            count++;
            
            
            
            if(count == 1){
                starts[j] = i;
                num_words++;
            }
        }
        
        else{
            
          if(msg[i] != '\0'){  
                length[j] = count;
                count = 0;
                j += 1;
          }
        }
    }
    
    
 for(i = num_words - 1; i >= 0 ; i--){
    for(j = 0; j < length[i]; j++)
        putchar(msg[starts[i] + j]);

    if (i > 0) {
        putchar(' ');
    }
}

    

    return 0;
}