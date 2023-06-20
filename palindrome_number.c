#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check if its a palindrome number\n");
    scanf("%d",&num);
    int sum=0;
    int temp=num;
    while(temp>0)
    {
        int dig=temp%10;
        sum=(sum*10)+dig;
        temp=temp/10;
    }
    if(num==sum)
    {
        printf("The entered number %d is a palindrome number",num);
    }
    else
    {
        printf("The entered number %d is not a palindrome number",num);
    }
    return 0;
}