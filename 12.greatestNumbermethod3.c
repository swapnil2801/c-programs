//write program to print greatest number between 3 numbers :method 3

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any 3 numbers :");
    scanf("%d%d%d",&a,&b,&c);
    (a>b) ? ( (a>c)?printf("%d",a):printf("%d",c) ): ( b>c?printf("%d",b): printf("%d",c) );   
    return 0;
}