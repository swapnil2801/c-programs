//Use of break statement to check 
//whether a number is prime or not .
#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter any number :");
    scanf("%d",&n);
    for (i=2;i<n;i++){
        if (n%i==0)
        break;
    }if (i==n){
        printf("its a prime no");

    }else{
        printf("its not a prime no ");
    }return 0;

}