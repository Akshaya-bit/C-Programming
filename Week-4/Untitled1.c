#include<stdio.h>
//comparing 3 numbers using else if
void main()
{
   int a,b,c;
    a = 11;
    b = 25;
    c = 44;
    if ( a >= b && a > c)
    {
       printf("%d is the largest number.", a);
    }
    else if( b>=c)
    {
       printf("%d is the largest number.", b);
    }
    else
    {
        printf("%d is the largest number.", c);
    }
}
