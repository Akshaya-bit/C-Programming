// swap two numbers
#include<stdio.h>

void main()
{
printf("please enter 2 numbers ");
int a,b,temp;
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("here are the 2 numbers swaped %d and %d",a,b);
}
