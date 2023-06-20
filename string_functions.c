#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    char lastName[20];
    printf("Enter the first name\n");
    fgets(name,20,stdin);
    printf("The name entered is %s\n",name);
    printf("The name in lower case is %s\n",strlwr(name));
    printf("The name in upper case is %s\n",strupr(name));
    // printf("The name reversed is %s",strrev(name));
    printf("Enter the last name of the person\n");
    fgets(lastName,20,stdin);
    printf("Full name of the person is %s\n",strcat(name,lastName));
    return 0;
}