//Swap command without 3rd variable
#include<stdio.h>

void main()
{
printf("please enter 2 numbers ");
int a,b;
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("here are the 2 numbers swapped %d and %d",a,b);
}
