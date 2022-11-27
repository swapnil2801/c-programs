#include <stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("Enter any three numbers :\n");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3.0;    //3.0 because we want avg in float 
    printf("Average is %lf",avg);
    return 0;
}