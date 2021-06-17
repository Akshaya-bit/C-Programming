#include<stdio.h>
//check if the number is odd
void main()
{
    int num1,num2;
    printf("Enter 2 even numbers\n");
    scanf("%d %d", &num1, &num2);

    if (num1%2==0)
    {
        if (num2%2==0)
        {
          for(;num1<=num2;num1+=2 )
            {
                printf("  %d\n",num1);

            }
        }
        else
        {
            num2= num2+1;
            for(;num1<=num2;num1+=2 )
            {
                printf("  %d\n",num1);

            }

        }
    }
    else
    {
        num1= num1+1;
        for(;num1<=num2;num1+=2 )
            {
                printf("  %d\n",num1);

            }
    }


}
