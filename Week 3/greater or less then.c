#include <stdio.h>


//get numbers from the user to figure out the larger number

void main()
{
    int a,b;

    printf("type in 2 numbers to see which is bigger\n");
    scanf("%d%d", &a, &b);

    if (a>=b)
    {
        printf("The number %d is bigger than %d",a,b);
    }
    else
    {
        printf("The number %d is bigger than %d",b,a);
    }

}
