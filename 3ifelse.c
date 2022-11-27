//Write a C program to check whether a number is negative, positive or zero.
#include <stdio.h>
int main()
{
    int a;
    printf("enter any no. :\n");
    scanf("%d",&a);
    if (a>0){
        printf("%d is an positive\n",a);
    }else if (a<0){
        printf("%d is an negative\n",a);
    }else if (a==0){
        printf("%d is an zero\n",a);
    }else {
        printf("wrong input");
    }
    return 0;
}