#include <stdio.h>
int main()
{
    int sum=0,num,digit;
    printf("The value of num\n");
    scanf("%d",&num);
    while (num!=0){
        digit=num%10;
        num=num/10;
        sum+=digit;
    }printf("sum of digits is %d",sum);

    return 0;
}