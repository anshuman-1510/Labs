#include<stdio.h>

int main()
{
    int year, total_days = 0, leap_years = 0, normal_years = 0, day_of_week;
    printf("Enter the year: ");
    scanf("%d", &year);

    int y = year - 1; 

    leap_years = y / 4 - y / 100 + y / 400;
    normal_years = y - leap_years;

    total_days = leap_years * 366 + normal_years * 365;

    day_of_week = total_days % 7;

    switch(day_of_week)
    {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
    }

    return 0;
}
