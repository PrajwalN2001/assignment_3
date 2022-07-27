#include<stdio.h>
int main()
{

    int a,b,c;
    printf("enter any three number");
    scanf("%d \n %d \n %d",&a,&b,&c);

    if(a>=b && a>=c)
    {
        printf("greatest number is = %d",a);
    }
    else if(b>=a && b>=c)
    {
        printf("greatest number is = %d",b);
    }
    else
    {
        printf("greatest number is = %d",c);
    }

    return 0;
}
