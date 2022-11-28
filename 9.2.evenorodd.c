//check whether the given number is even or odd:second method 
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number :");
    scanf("%d",&a);
    if (a%2){
        printf("Given number is odd");
    }else{
        printf("Given number is even");
    }return 0;
}
