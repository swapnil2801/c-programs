//Even or odd without using modulus operator.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any no :");
    scanf("%d",&n);
    if ((n&1)==0){
        printf("%d is an even no.",n);
    }else {
        printf("%d is an odd no ",n);
    }return 0;
}