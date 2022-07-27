#include<stdio.h>
int main()
{

    int side1,side2,side3;
    printf("enter the length of side:-\n");
    scanf("%d",&side1);
    printf("enter the length of side:-\n");
    scanf("%d",&side2);
    printf("enter the length of side:-\n");
    scanf("%d",&side3);
    if(side1+side2>side3 && side2+side3>side1 && side1+side3>side2)
    {
    printf("given triangle is valid");
    }
    else
    printf("given triangle is invalid");
    return 0;
}
