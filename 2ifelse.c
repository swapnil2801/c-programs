//Write a C program to find maximum between three numbers.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter any tree no.");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b>c){
        printf("%d is maximum no.\n",a);}
        else if(b>a>c){
            printf("%d is maximum no.\n",b);
        }else {
            printf("%d is maximum no.\n",c);

        }
        return 0;
 }
