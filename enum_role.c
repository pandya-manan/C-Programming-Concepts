#include<stdio.h>
enum States {Working=1,Dead=0};
int main()
{
    enum States state;
    state=Working;
    printf("The code is %d\n",state);
    state=Dead;
    printf("The code is %d",state);
    
    return 0;
}