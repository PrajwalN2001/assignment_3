#include<stdio.h>
 int main()
    {
        int num;
        printf("enter a number");
        scanf("%d",&num);
        if(num%1000==num)
        {
            if(num%10==num||num%100==num)
                {
                    printf("number is not three digit");
                }
            else
                {
                    printf("number is three digit");
                }
        }
        else
        {
            printf("number is not three digit");
        }
        return 0;

    }

