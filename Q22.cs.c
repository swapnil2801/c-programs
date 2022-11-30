//print the table for a no n.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any no. :");
    scanf("%d",&n);

    for (int i=10;i>=1;i--) {
    
    printf("%d\n",n*i);
    }
    return 0;

}