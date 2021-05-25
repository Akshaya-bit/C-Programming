#include<stdio.h>

void main()
{
    int a;
    printf("type in a number to see if its positive\n");
    scanf("%d", &a);

    if(a>0)
    {
        printf("the number is positive");
    }
    else
    {
        printf("The number is negative");
    }

}
