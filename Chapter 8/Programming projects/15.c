
#include <stdio.h>
#include <string.h>

int main()
{
    char msg[35];
    char abc[] = {'a','b','c',
                'd','e','f',
                'g','h', 'i',
                'j','k','l',
                'm','n','o',
                'p','q','r',
                's','t','u',
                'v','w','x',
                'y','z'};
                
    
    
    int i, j;
    

    char word = '.';
    int shift = 0, new_shift = 0;
    
    for (i = 0; i < 35 ; i++){ //Initialize the char array 
        msg[i] = '.';
    }
    printf("Enter a message: ");
    
    
    fgets(msg, sizeof(msg), stdin); //More efficcient than scanf
    
    printf("Enter a shift amount: ");
    scanf("%d", &shift);
    
    msg[strcspn(msg, "\n")] = '.'; //
    
    
    for(i = 0; i < 35; i++){
        word = msg[i];
        
        for(j = 0; j < 26; j++){
            new_shift = shift;
            
            if(word == abc[j] && word != ' '){
                new_shift = shift + j;
                
                if(new_shift >= 25){
                    new_shift = 25 - j;
                    
                    new_shift = shift - new_shift;
                    
                    new_shift = new_shift - 1; //index starts at zero
                }
                
                word = abc[new_shift];
                putchar(word);
                break;
            }
            
            if(word == ' '){
                putchar(' ');
                break;
            }
            
            
        }
    }
    
  

    

    return 0;
}