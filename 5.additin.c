#include <stdio.h>
int sum(int x,int y);//decleration
int main()
{
    int a,b;
    printf("Enter the value of a,b :");
    scanf("%d%d",&a,&b);

    int s= sum(a,b);//calling 
    printf("sum :%d",s);

    return 0;
}
int sum(int x,int y){//definning
    return (x+y);
}