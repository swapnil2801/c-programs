#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    float r1,r2;
    printf("Enter the value of a,b,c,d :\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if (d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("The roots are real and unequal\n");
        printf("%f\t%f",r1,r2);
    } else if (d==0){
        r1=r2=-b/(2*a);
        printf("The roots are real and equal are %f",r1);
    }else {
         printf("The roots are not real");
    }return 0;
}