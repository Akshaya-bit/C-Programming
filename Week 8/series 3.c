#include<stdio.h>

void main()
{
    float sum=0;
    float i;
    for(i=1;i<=10;i++)
    {
        sum=sum+(1/i);
    }
    printf("%f",sum);
}
