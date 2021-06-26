#include<stdio.h>

void main()
{
    int i;
    int n;
    int sum=0;

    for(n=0;n<=20;n++)
    {
       i=(2*n)+1;
       sum=sum+i;

    }
    printf("%d ",sum);
}
