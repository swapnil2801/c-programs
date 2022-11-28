//write program to print greatest number between 3 numbers :method 2

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any 3 numbers :");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        (a>c)?printf("%d",a):printf("%d",c);      //conditional statement
    }else{
        b>c?printf("%d",b): printf("%d",c);       //conditional statemen t
    }
    return 0;
}