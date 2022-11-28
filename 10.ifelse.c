/*Write a C program to input angles of a triangle and check whether 
triangle is valid or not.*/
#include <stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter the three angles of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if (sum==180 && a>0 && b>0 && c>0){
        printf("Triangle is valid");

    }else {
        printf("Triangle is not valid");

    } return 0;
}