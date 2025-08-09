#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <ctype.h> 


#define STACK_LENGTH 10 
#define EMPTY (-1)
#define MIN_STACK INT_MIN


int arr_input[STACK_LENGTH] = {'2','1','5','4','1','+','+','+','+','='};
int stack[STACK_LENGTH];
int top = EMPTY;




bool push(int value);
int pop(void);
void analize(void);




int main()
{
    int res;
   
    analize();
    printf("%d", stack[0]);

    return 0;
}





bool push(int value){
    if(top >= STACK_LENGTH) return false; //I can't add more values 

    top++;
    stack[top] = value;
    return true;
}

int pop(void){
    if(top <= EMPTY) return MIN_STACK;

    int popped_val = stack[top];
    top--;
    return popped_val;
}

void analize(void){

    int a = 0, b = 0;
    int op;
    int token;

    for(int index = 0; index < STACK_LENGTH; index++){
        
        token = arr_input[index];
        
        if(isdigit(token)){
            push(token - '0');
            continue;
        }

        else if (token == '=')
        {
            break;
        }
        

        b = pop();
        a = pop();

        op = a + b;

        push(op);

    }

    

}