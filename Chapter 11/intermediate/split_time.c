#include <stdio.h>


void split_time(int total_sec, int *p_hr, float *p_min, float *p_sec);


int main(){

    int time_elapsed = 8661, hour = 0;
    float min = 0, sec = 0;

    split_time(time_elapsed, &hour, &min, &sec);

    printf("\n Hours: %d\n", hour);
    printf("\n Minutes: %.0f\n", min);
    printf("\n Seconds: %.0f\n", sec);

    return 0;
}

void split_time(int total_sec, int *p_hr, float *p_min, float *p_sec){

    
    *p_hr = total_sec / 3600;
    *p_min = (total_sec % 3600) / 60;
    *p_sec = (total_sec % 3600) % 60;
   
}
