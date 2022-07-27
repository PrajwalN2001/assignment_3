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
        printf("entered alphabet in uppercase");
    return 0;
}
