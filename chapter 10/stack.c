#include <stdio.h>
#include <limits.h> //to call INT_MIN
#include <stdbool.h>

//push add a new element onto the stack 
//pop removes an element onto the stack 

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

int mystack[STACK_LENGTH];
int top = EMPTY;

bool push(int value);
int  pop();

int main(){
    push(56);
    push(29);
    push(13);

    int t;
    while((t = pop()) != STACK_EMPTY ){
        printf("t = %d\n", t);
        
    }

    
    
    return 0;
}


/* 

 We are going to enter an integer and add it to the stack  
 and return a boolean. 
 
 False: if we cannot add it to the stack 
 True: if we could add it to the stack 

 */

bool push(int value){
    if (top >= STACK_LENGTH) return false; //if the top reach the top return false
    
    //if not increment the top, and add the value to the stack 
    top++;
    mystack[top] = value;
    return true;
}

int pop(){
    //if the stack is empty we can't remove anything from the stack 
    if (top <= EMPTY) return STACK_EMPTY;

    int result = mystack[top];
    top--;
    return result;
}




