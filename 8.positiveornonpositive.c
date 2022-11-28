//check whether the number is +ve or non +ve:
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number :");
    scanf("%d",&a);
    if (a>0){
        printf("number is positive");
    }else{
        printf("number is non positive");
    }return 0;
}