//check whether the given number is armstrong number or not.
#include <stdio.h>
int arms(int n);
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    arms(n);
    return 0;
}
int arms(int n){
    int temp,digit,sum=0;
    temp=n;
    while(temp!=0){
        digit=temp%10;
        temp=temp/10;
        sum=sum+digit*digit*digit;
    }if (n==sum){
        printf("Given number is armstrong number");
    }else{
        printf("Given number is not a armstrong number");
    }
}