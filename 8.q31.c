//write the functions to calculate area of square ,rectangle and triangle.
#include <stdio.h>
float squareArea(float side);
float triangleArea(float rad);
float rectangleArea(float a,float b);
float main()
{
    float a=5;
    float b=32;
    printf("Area of rectangle is :%f",rectangleArea(a,b));
    return 0;

}
float squareArea(float side){
    return side *side;
}
float triangleArea(float rad){
    return 3.14*rad*rad;
}
float rectangleArea(float a,float b){
    return a*b;
}