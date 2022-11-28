//print the fibonacci series upto n terms.
#include <stdio.h>
int main(){
    int n,a=0,b=1,c,count=2;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    while(count<n){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        count++;
    }return 0;
}