//take 2 no from user and print from the the 1st to the 2nd

#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Please enter 2 numbers:\n");
    scanf("%d\n %d", &num1,&num2);

    while(num1<=num2)
    {
        printf("%d\n",num1);
        num1++;
    }
}
