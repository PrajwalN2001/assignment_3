#include<stdio.h>
 int main()
    {
        int num,result;
        printf("enter a number");
        scanf("%d",&num);
        result=num&1;
        if(result==0)
        {
            printf("number is even");
        }
        else
        {
            printf("number is odd");
        }
        return 0;

    }

