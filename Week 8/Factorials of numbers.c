#include<stdio.h>

void main()
{
    for(int num =1;num <=10; num++)
    {
        int fact = 1;
        for(int i =1; i<=num;i++)
        {
            fact = fact *i;
        }
        printf("The fact of %d is %d\n",num,fact);
    }
}
