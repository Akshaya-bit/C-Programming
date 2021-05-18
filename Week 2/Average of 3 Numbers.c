//Average of 3 given numbers
#include<stdio.h>

void main()
{
    /*to find the average i need the sum of the 3 numbers
    a- 1st number
    b- 2nd number
    c- 3rd number */
    int a,b,c;
    printf("Please enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    /*int sum = a+b+c;
    int average = sum/3;*/
    printf("the average of the 3 numbers is %d",(a+b+c)/3);
}
