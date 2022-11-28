//fibonnaci serries print upto n.
#include <stdio.h>
int fibo(int n);
int main()
{
    int n;
    printf("How many terms do you want to print ");
    scanf("%d",&n);
    fibo(n);
    return 0;
}
int fibo(int n){
    int count=2,a=0,b=1,c;
    printf("%d\t%d\t",a,b);
    while(count<=n){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        count++;
    }
}