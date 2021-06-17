/*Calculating the number of days in a month given a year*/

#include<stdio.h>


void main()
{
    int month,year;


    printf("Type in the number of the required month ");
    scanf("%d", &month);
    printf("Type in the number of the required year ");
    scanf("%d", &year);

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
            printf("31 days");
            break;
        case 4:
        case 6:
            printf("30 days");
        case 2:
            if (((year%4==0) && (year%400==0)) || (year%100!=0))
            {
                printf(" has 29 days.");
            }
            else
            {
                printf(" has 28 days.");
            }
            break;


           /* 1,3,5,7,8,10,12
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;*/
        default:
            printf("make sure to pick a choice between 1 & 12");
    }
    //leap year formula  not working
     /*   if (month==2)
        {
            if (((year%4==0) && (year%400==0)) || (year%100!=0))
            {
                printf(" has 29 days.", year);
            }

            else
            {
                printf(" has 28 days.", year);
            }
        }

        else if (month==1,3,5,7,8,10,12)
        {
            printf(" has 31 days");
        }

        else
        {
            printf(" has 30 days");
        }
*/
}
