//print n perfect numbers.
#include <stdio.h>
int main()
{
    int n,sum=0,count=1,num=1;
    printf("Enter the number that times you want to print :");
    scanf("%d",&n);
    while (count<=n){
        for (int i=1;i<num;i++){
           if(num%i==0){
            sum+=i;} 
        }if (num==sum){
            printf("%d\t",num);
            count++;
        }num++,sum=0;
    }return 0;
}