/* include libraries*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> /* to use exit function */

/* Define directives*/
#define STACK_SIZE 6

/*Declaration of external variables */
char contents[STACK_SIZE];
int top = 0; //marks the postion of the 

/*Prototypes*/
void fill_arr(void);
void push(void);
void pop(void);
void print_stack(void);


int main(){
    
    int operation;
    fill_arr();
    
    for(;;){
    printf("*****Stack Operations***\n");
    printf("0 - finish program \n");
    printf("1 - push \n");
    printf("2 - pop \n");
    printf("3 - print stack\n");
    printf("\n");
    
    printf("Select operation in the stack: ");
    scanf("%d", &operation);
    
    if (operation == 0) {
        printf ("Bye :v"); 
        exit(EXIT_SUCCESS);
    }
    
    if (operation == 1) push();
    if (operation == 2) pop();
    if (operation == 3) print_stack();
    
    }
    
    return 0;
}


void fill_arr(void){
    for(int i = 0; i < STACK_SIZE; i++){
        contents[i] = '*';
    }
}
void push(void){
    char temp_input;
    printf("\n");
    printf("Enter the number to add to the stack: ");
    temp_input = getchar();
    contents[top] = temp_input;
    top++;
    
}

void pop(void){
    contents[top - 1] = '*';
}

void print_stack(void){
    printf("-------------------\n");
    printf("stack values\n");
    printf("-------------------\n");
    for(int i = 0; i < STACK_SIZE; i++){
        printf("%c ", contents[i]);
    }
    printf("\n\n");
}

