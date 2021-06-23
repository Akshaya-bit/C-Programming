// -1+2,-3+4,-5+6
#include<stdio.h>
void main()
{
    int i;
    int j;
    int sum;

    for(i=-1,j=2;i<=11,j<=12;i+=2,j+=2)
    {
        sum = sum+i;
        printf("%d ",sum);
    }

}
