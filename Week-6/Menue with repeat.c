/*Write a menu with 4 options
-collect 2 numbers from the user
-menu to add subtract multiply or divide
-option to use again*/


#include<stdio.h>
void main()

{
    int num1,num2,choice,again;
    do{


    printf("type 2 numbers\n");
    scanf("%d",&num1);
    scanf("%d",&num2);

    printf("What would you like to do with the 2 numbers?\n");
    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide");
    printf("\nType the choice:");
    scanf("%d",&choice);

    switch(choice)
    {
       case 1 :
          printf("the answer is: %d",num1+num2);
          break;

       case 2 :
          printf("the answer is: %d",num1-num2);
          break;

       case 3 :
          printf("the answer is: %d",num1*num2);
          break;

       case 4 :
          printf("the answer is: %d",num1/num2);
          break;

    }

    printf("\nwant to calculate again?\n");
    printf("1.Yes\n2.No\n");
    scanf("%d",&again);

    }while(again==1);

}


