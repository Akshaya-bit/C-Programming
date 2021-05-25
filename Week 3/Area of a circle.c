// Area of a circle 3.14*r*r

#include<stdio.h>

void main()
{
    float radius,area;
    printf("Please enter the radius of the circle:");
    scanf("%f",&radius);
    area=3.14*radius*radius;

    printf("The area of the circle with radius %f is %f",radius,area);

}
