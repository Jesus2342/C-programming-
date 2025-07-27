#include <stdio.h>

int day_of_month(int month, int day);

int main(){

    int month, day, result;
    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the day: ");
    scanf("%d", &day);

    result = day_of_month(month, day);

    printf("The day of the year is  %d", result);
    return 0;
}

int day_of_month(int month, int day){
    int days_month;

    days_month = (month * 30) + day;

    return days_month;
}
