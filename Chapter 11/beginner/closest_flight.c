#include <stdio.h>
#include <string.h>

#define N 5

void find_closest_flight(int desired_time_min, char *response);

int main(){

    char prompt[N] = "11:15";
    int hour = 0, min = 0;

    sscanf(prompt, "%d:%d" ,&hour, &min);

    int desired_time = (hour * 60) + min;
    char best_time[10];


    find_closest_flight(desired_time, best_time);


    printf("The closest flight would be at %s",best_time);

}

void find_closest_flight(int desired_time_min, char *response) {

    if(desired_time_min >= 480){ 
        strcpy(response, "8am");
    }

    if (desired_time_min >= 583) { 
        strcpy(response, "9:43am");

    } 
    if (desired_time_min >= 679) { 
        strcpy(response, "11:19am");

    }

    if (desired_time_min >= 767) { // after 12:47pm
        strcpy(response, "12:47pm");
    }


}