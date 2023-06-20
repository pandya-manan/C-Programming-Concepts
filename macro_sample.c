#include<stdio.h>
#define square(x) (x*x)
int main()
{
    int num;
    printf("Enter a number whose square needs to be found out\n");
    scanf("%d",&num);
    int result=square(num);
    printf("The square of the number %d is %d",num,result);
    return 0;
}