//check the given number is perfect or not;
#include <stdio.h>
int perfect(int n);
int main()
{
    int n;
    printf("Enter any that you want check:");
    scanf("%d",&n);
    perfect(n);
    return 0;
}
int perfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
       if(n%i==0)
        sum=sum+i;  } 
if(n==sum){
    printf("%d is an perfect number ",n);
}else
    printf("%d is not a perfect number",n);

}