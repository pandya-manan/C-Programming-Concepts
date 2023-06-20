#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    printf("Enter a name to count the number of vowels in the string\n");
    scanf("%s",&name);
    int length=strlen(name);
    int count=0;
    for(int i=0;i<length;i++)
    {
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
        {
            count+=1;
        }
    }
    printf("The number of vowels in the name is %d",count);
    return 0;

}
