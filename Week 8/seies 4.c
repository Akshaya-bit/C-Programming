#include<stdio.h>
void main()

{
    int sum = 0;
    int multiply = 1;
    for ( int i=3;i<=15;i+=2)
    {
      multiply=i * (i+2);
      sum=sum+multiply;
    }
    printf ("%d\n",sum);
}
