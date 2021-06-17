//figure out the smaller number then print

#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Please enter 2 numbers:\n");
    scanf("%d\n %d", &num1,&num2);
        if(num1<num2)
        {
            while(num1<=num2)
            {
                printf("%d\n",num1);
                num1++;
            }
        }
        else
        {
          while(num2<=num1)
            {
                printf("%d\n",num2);
                num2++;
            }
        }
}
