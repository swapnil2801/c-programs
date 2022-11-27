//nth fibonacci number ;
#include <stdio.h>
int fibo(int n);
int main()
{
    printf("%d",fibo(6));
    return 0;
}
int fibo(int n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
    int fiboN1=fibo(n-1);
    int fiboN2=fibo(n-2);
    int fiboN=fiboN1+fiboN2;
    return fiboN;
}
