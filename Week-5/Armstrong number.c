#include<stdio.h>
#include<math.h>

void main()
{
    int num = 153;
    int numCopy=num;
    int copy =num;
    double digit =0;
    while(copy > 0)
    {
        digit++;
        copy= copy/10;
    }
    double sum=0;

    while (num>0)
    {
        double rem= num%10;
        sum = sum+ pow(rem,digit);
        num= num /10;
    }

    if(copy==num)
    {
        printf("Armstrong");
    }
    else
    {
      printf("Not Armstrong");
    }

}

