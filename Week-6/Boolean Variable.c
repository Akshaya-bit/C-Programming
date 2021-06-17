#include<stdio.h>
#include<stdbool.h>

void main()
{
    int num = 0;
    bool repeat = true;
    //flag a variable with a true or false value
    do{
        printf("enter number between 1-10");
        scanf("%d",&num);
        if (num<0 || num >10)
        {
            printf("Error");
        }
        else
        {
            repeat = false;
        }
        }while(repeat==true);

}

/*you can also have repeat without true as the initial value for repeat is true*/
