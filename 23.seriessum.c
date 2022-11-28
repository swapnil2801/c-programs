//Find the sum of series 1+(1+2)+ (1+2+3) +(1+2+3+4)… n terms.
#include <stdio.h>
int main()
{
    int num,i=1,sum=0,j;
    printf("Enter the number :");
    scanf("%d",&num);
    while(i<=num){
        j=1;
        while(j<=i){
            sum+=j;
            j++;
         } i++;  
    }printf("%d",&sum);
    return 0;
}