//write program to print greatest number between 3 numbers :method 4

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any 3 numbers :");
    scanf("%d%d%d",&a,&b,&c);
    printf("The greater number is :");
    printf("%d", (a>b) ? ((a>c)?a:c) : ((b>c)?b: c) ); 
    return 0;
}