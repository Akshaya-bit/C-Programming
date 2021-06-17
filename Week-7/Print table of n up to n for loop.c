#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Please enter the number you want to multiply:");
    scanf("%d",&j);

    printf("how many times do you want to multiply it:");
    scanf("%d",&i);

    for(i=1;i<=10;i++)
   {

       printf("%d*%d=%d\n",i,j,i*j);

   }

}
