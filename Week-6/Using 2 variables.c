#include<stdio.h>

void main()
{
    int i =1;
    for(int i=1,j=5;i<=5;i++,j+=5)
    {
        printf("%d\n",i+j);
    }
}
