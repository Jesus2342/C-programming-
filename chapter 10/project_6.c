#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <ctype.h> 

#define STACK_LENGTH 10 
#define EMPTY (-1)
#define MIN_STACK INT_MIN


int arr_input[STACK_LENGTH];
int stack[STACK_LENGTH];
int top = EMPTY;



void read_input();
bool push(int value);
int pop(void);
void analize(void);




int main()
{
    
    read_input();
    analize();

    printf("%d", stack[0]);

    return 0;
}

void read_input(){
    printf("Enter the numbers to calculate: "); 
    

    char ch;  //char becuase this is going to take numbers and symbols (+, -, *, /)
    int index = 0;
    
    while((ch = getchar())  != '\n'){
        
        if(ch == ' ') continue;
        arr_input[index++] = ch;

    }

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

        b = pop();
        a = pop();

        if (token == '+'){
            op = a + b;
            push(op);
        }

        else if (token == '-')
        {
            op = a - b;
            push(op);
            
        }

        else if (token == '/')
        {
            op = a / b;
            push(op);
            
        }

        else if (token == '*')
        {
            op = a * b;
            push(op);
            
        }

        else if (token == '=')
        {
            break;
        }

    }

}