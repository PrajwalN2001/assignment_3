#include<stdio.h>
 int main()
    {
        int i,j;
        printf("enter a two number");
        scanf("%d %d",&i,&j);
        if(i>j)
        {
             printf("greater number is %d",i);
        }
        else if(j>i)
        {
            printf("greater number is %d",j);
        }
        else
        {
            printf("number is same");
        }
        return 0;

    }

