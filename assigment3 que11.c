#include<stdio.h>
int main()
{

    int a,b,c,d,e;
    printf("enter the marks of five subject number");
    scanf("%d \n %d \n %d \n %d \n %d",&a,&b,&c,&d,&e);

    if(a>33 && b>33 && c>33 && d>33 && e>33)
    {
        printf("candidate were passed in the examination");
    }
    else
    {
        printf("candidate were failed in the examination");
    }

    return 0;
}
