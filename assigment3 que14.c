
#include<stdio.h>
int main()
{

    int num;
    printf("enter any number\n");
    scanf("%d",&num);

    if(num%7==0 || num%3==0)
    {
        if(num%7==0)
        printf("number is divisible by 7");
        else
        printf("number is divisible by 3");
    }
    else
        printf("number is not divisible by 7 or divisible by 3.");
    return 0;
}
