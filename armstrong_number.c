#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter a number to check if it's an armstrong number or not\n");
    scanf("%d",&num);
    int sum=0;
    int temp=num;
    while(temp>0)
    {
        int dig=temp%10;
        sum=sum+(pow(dig,3));
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("The number %d is an armstrong number ",num);
    }
    else
    {
        printf("The number %d is not an armstrong number",num);
    }
    return 0;

}