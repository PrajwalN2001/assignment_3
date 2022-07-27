#include<stdio.h>
int main()
{

    int cost,sell;
    float profit,loss;
    printf("enter the cost price");
    scanf("%d",&cost);
    printf("enter the selling price");
    scanf("%d",&sell);
    if(cost>sell)
    {
        loss=cost-sell;
        loss=loss/cost*100;
        printf("loss percentage is = %f",loss);
    }
    else
    {
     profit=sell-cost;
     profit=profit/cost*100;
     printf("profit percentage is =%f",profit);

    }
    return 0;
}
