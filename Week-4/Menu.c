#include<stdio.h>
/* enter 2 numbers
menu
1 add
2 subtract
3 multiply
4 duvude
ask user to enter choice
perform choice and give output
*/

void main()
{
    int num1,num2,choice,sum,difference,multiple,answer;

    printf("please enter 2 numbers\n");
    scanf("%d %d", &num1,&num2);

    printf("What should I do with the numbers\n 1.Add \n 2.Subtract \n 3.Multiply \n 4.Divide\n Enter your choice:  ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            sum=num1+num2;
            printf(" Answer:%d",sum);
            break;
        case 2:
            difference=num1-num2;
            printf(" Answer:%d",difference);
            break;
        case 3:
            multiple=num1*num2;
            printf(" Answer:%d",multiple);
            break;
        case 4:
            answer=num1/num2;
            printf(" Answer:%d",answer);
            break;
        default:
            printf("make sure to pick a choice between 1 & 4");
    }
}
