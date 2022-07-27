#include<stdio.h>
int main()
{

    int check;
    char x;

    printf("enter the Alphabet\n");
    scanf("%c",&x);
    check=x;
    if(check>=97 && check<=122)
    {
        printf("entered alphabet in lowercase");
    }
    else if(check>=65 && check<=90)
    {
        printf("entered alphabet in uppercase");
    }
    else if(check>=48 && check<=57)
    {
        printf("you entered digit");
    }
    else
    {
        printf("you entered a special symbol");
    }
    return 0;
}
