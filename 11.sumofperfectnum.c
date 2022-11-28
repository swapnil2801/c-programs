//calculate the sum of n perfect numbers;
#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    sum(n);
    return 0;
}
int sum(int n){
    int count=1,sum=0,num=1;
    
    while(count<=n)
    {
        for(int i=1;i<num;i++)
        {
        if(num%i==0)
            sum=sum+i;
        }if(num==sum)
        {
        printf("%d\t",num);
        count++;
        }
        num++,sum=0;
       
    } 
}