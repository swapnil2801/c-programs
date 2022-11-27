// Find the area and circumference of a circle with radius 
// Circumference cir = 2*22/7*r
// Area area = 22/7*r*r
#include <stdio.h>
int main()
{
    float rad;
    float area,circum;
    printf("Enter the radius of cicle :");
    scanf("%f",&rad);
    circum=2*22.0/7*rad;
    area=22.0/7*rad*rad;
    printf("The circumference of a circle is %6.2f\n",circum);
    printf("The area of a circle is %6.2f",area);
    return 0;
}