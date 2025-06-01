/*
Modify Programming Project 8 from Chapter 5 so that the departure times are stored in an array and the arrival times are stored in a second array. (The times are integers, representing the number of minutes since midnight.) The program will use a loop to search the array of departure times for the one closest to the time entered by the user.
*/

#include <stdio.h>

int main()
{
    int departure[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    int client_hour = 0, client_min = 0, total_min = 0;
    int dif = 0, index = 0;


    printf("Enter the hour: ");
    scanf("%d:%d", &client_hour, &client_min);

    total_min = (client_hour * 60) + client_min;

    for(int i = 0; i < 8; i++){
        dif = total_min - departure[i];

        if(dif < 0){
            index = i - 1;
            break;
        }

    }
    
    client_hour = departure[index] / 60;
    client_min = departure[index] % 60;

    printf("Best time for departure is %d:%d", client_hour,client_min);
    
    return 0;
}