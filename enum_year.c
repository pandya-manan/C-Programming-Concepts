#include<stdio.h>
enum months {January,February,March,April,May,June,July,August,September,October,November,December};
int main()
{
    printf("The Number of months in the year\n");
    int month;
    for(month=January;month<=December;month++)
    {
        printf("%d ",month+1);
    }
    return 0;
}
