#include<stdio.h>
enum daysOfTheWeek {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
int main()
{
    enum daysOfTheWeek day;
    day=Wednesday;
    printf("%d",day);
    return 0;
    
}