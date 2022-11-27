//Write a program in C to check whether a number is a prime number or not using the function.
#include <stdio.h>
int numb(int a);
int main()
{
    int a;
    printf("Enter any number :\n");
    scanf("%d",&a);
    numb(a);
    return 0;
}
int numb(int a){
    int c=0;
    for (int i=1;i<=a;i++){
        if (a%i==0)
            c++;   
    }if (c==2){
        printf("%d is an prime number",a);
    }else{
        printf("%d is not a prime number",a);
    }
}