#include<stdio.h>
#define LIMIT 5
int main()
{
    int i;
    for(i=0;i<LIMIT;i++)
    {
        printf("%d\n",i);
    }

    #undef LIMIT
    
    printf("\n");
    int LIMIT=9;
    for(i=0;i<LIMIT;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}