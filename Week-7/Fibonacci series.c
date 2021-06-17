#include<stdio.h>

void main()
{
    int n1=0;
    int n2=1;
    int series=8;
    int fib;
    printf("%d \t %d",n1,n2);

    for(int i=1; i<=series -2; i++)
    {
        fib = n1+n2;
        printf("\t%d",fib);
        n1=n2;
        n2=fib;
    }


}
