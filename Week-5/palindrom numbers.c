#include<stdio.h>

void main()
{
    int num = 121;
    int numCopy=num;
    int rev =0;
    while(num > 0)
    {
        int rem = num %10;
        rev = rem+(rev*10);
        num= num / 10;
    }

    if(numCopy==rev)
    {
        printf("Palindrome");
    }
    else
    {
      printf("Not Palindrome");
    }

}
