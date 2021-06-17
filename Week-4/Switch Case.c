/*switch case
#1 only check int or Charecter
#2 only for  '=='*/

#include<stdio.h>
void main()
{
    int x=100;

    switch(x)
    {
        case 100:
        printf( "100");
        break; //exit out of a statement. break doesn't work in if
        case 200:
        printf( "200");
        break;
        case 300:
        printf( "300");
        break;
        default:
            printf("try agian");

    }
}
