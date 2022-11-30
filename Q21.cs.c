//print factorial of no n
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no :");
    scanf("%d",&n);

    int factorial=1;
    for (int i=1;i<=n;i++){
        factorial=factorial*n;
    }printf("%d",factorial);
    return 0;

}

    