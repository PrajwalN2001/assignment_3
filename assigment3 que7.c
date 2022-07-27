#include<stdio.h>
int main()
{

    int a,b,c,D;
    printf("enter any three number");
    scanf("%d \n %d \n %d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
    {
        printf("real and distinct");
    }
    else if(D<0)
    {
        printf("Imaginary");
    }
    else
    {
        printf("real and equal");
    }

    return 0;
}
