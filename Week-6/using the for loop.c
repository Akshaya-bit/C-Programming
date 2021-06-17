// take 2 numbers to the user and print from 1st to second number
#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter 2 numbers\n");
    scanf("%d %d", &num1, &num2);

    for(;num1<=num2;num1++ )
    {
        printf("%d\n",num1);

    }
}

