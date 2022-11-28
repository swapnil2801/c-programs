//check whether the given number is even or odd:
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number :");
    scanf("%d",&a);
    if (a/2*2==a){
        printf("Given number is even");
    }else{
        printf("Given number is odd");
    }return 0;
}
