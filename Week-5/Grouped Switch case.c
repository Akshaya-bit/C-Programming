#include<stdio.h>
void main()
{
    int id=200;

    switch(id)
    {
    case 1:
    case 2:
    case 3:
        printf("Category 1");
        break;
    case 4:
    case 5:
    case 6:
        printf("Category 2");
        break;
    default:
        printf("Invaild")
    }

}
