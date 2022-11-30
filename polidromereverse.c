#include <stdio.h>
int main()
{
    int n,digit,rvr=0,temt;
    printf("Enter any no .");
    scanf("%d",&n);
    temt=n;
    while (temt!=0){
        digit=temt%10;
        temt=temt/10;
        rvr=rvr*10+digit;
    }
    if (n == rvr){
        printf("Its polidrome no.");
    }else{
        printf("Its not polidrome no");
    } return 0;
    }   


// #include<stdio.h>
// int main()
// {
// int num, temp, digit, reverse=0;
// printf("Enter the number\t");
// scanf("%d",&num);
// temp=num;
// while(temp!=0)
// {
//  digit=temp%10;
//  temp=temp/10;
//  reverse=reverse*10+digit;
// }
// if(num==reverse)
//  printf("%d is a palindrome", num);
// else
//  printf("%d is not a palindrome", num);
// }