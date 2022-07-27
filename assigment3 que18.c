#include<stdio.h>
int main()
{

    int month;
    printf("enter the month number:-\n");
    scanf("%d",&month);

    if(month==4 || month==6 || month==9 || month==11)
    {
    printf("month has 3o days");
    }
    else if(month==2)
    printf("month has 28 days or 29 days");
    else
        printf("month has 31 days");
    return 0;
}
