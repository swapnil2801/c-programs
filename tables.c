//Write a C program to print multiplication table of any number.
#include <stdio.h>
int main()
{
    int i,num;
    printf("Enter any number :");
    scanf("%d",&num);
    for (i=1;i<=10;i++){
    printf("%d\n",i*num);
    }return 0;

}