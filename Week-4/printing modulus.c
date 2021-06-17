#include<stdio.h>

void main()
{
    int count=386;
    while (count >0)
    {
        int rem = count % 10;
        printf("%d", count);

        count = count /10;

    }
}
