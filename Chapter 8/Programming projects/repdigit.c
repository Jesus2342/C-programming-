#include <stdio.h>

#define MAX_LENGHT 5

int my_array[MAX_LENGHT] = {2, 8, 2, 1, 8};
int repeated_array[MAX_LENGHT] = {0};


int main(){
    int current_number = 0, incidences = 0;

    for(int index = 0; index < MAX_LENGHT; index++){
        current_number = my_array[index];

        for(int i = index; i < MAX_LENGHT; i++){
            if((current_number) == (my_array[i])){
                    incidences += 1;
                }

            if((current_number == my_array[i]) && (incidences > 1)){
                    
                    if(incidences <= 2){
                    repeated_array[index] = current_number;  
                    }
                }
        }
        incidences = 0;
    }
    
    for (int i = 0; i < MAX_LENGHT; i++){
        printf("%d", repeated_array[i]);
        printf("\n");
    }
    return 0;
}