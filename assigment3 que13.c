#include<stdio.h>
int main()
{

    int num;
    printf("enter any number\n");
    scanf("%d",&num);

    if(num%3==0 && num%2==0)
    {
        printf("number is divisible by 3 and 2");
    }
    else
        printf("number is not divisible by 3 and 2");
    return 0;
}
