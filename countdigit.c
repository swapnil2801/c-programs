// C program to count number of digits in an integer.
#include <stdio.h>
int main()
{
    int num,count=0;
    printf("Enter any no :");
    scanf("%d",&num);
    do{       
        num/=10;
        count++;
    }while(num!=0);
    printf("%d",count);
    return 0;
}