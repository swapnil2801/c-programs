//Check whether a given number is an Armstrong number or not.
#include <stdio.h>
int main()
{
    int tempt,n,digit,sum=0;
    printf("Enter any number ");
    scanf("%d",&n);
    tempt=n;
    while (tempt!=0){
        digit=tempt%10;
        sum=sum+digit*digit*digit;
        tempt=tempt/10;
    }if (sum==n){
        printf("%d is an armstrong number",n);}
        else{
            printf("%d is not armstrong number",n);
        }return 0;

}