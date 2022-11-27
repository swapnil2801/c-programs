//Calculate the root of equation by getting input value of a,b,c;
#include <stdio.h>
#include <math.h>
float roots(float a,float b,float c);
int main()
{
    float a,b,c;
    printf("Enter the three number a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    roots(a,b,c);
    return 0;
}
float roots(float a,float b,float c){
    float r1,r2,d;
    d=b*b-4*a*c;
    if(d>0){
        r1=(-b+(sqrt(d)))/(2*a);
        r2=(-b-(sqrt(d)))/(2*a);
        printf("The roots are real and unequal are r1=%f \n r2=%f",r1,r2);
    }else if(d==0){
        r1=-b/(2*a);
        printf("The roots are real and equal are r1=r2=%f",r1);
    }else {
        printf("The roots are imaginary");
    }
}