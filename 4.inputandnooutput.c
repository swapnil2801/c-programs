//The function with input and no output:
#include <stdio.h>
void printsum(int,int);
int main()
{
    int a,b;
    printf("Enter the values of a,b :");
    scanf("%d%d",&a,&b);
    printsum(a,b);
    printf("again Enter the values of a,b :");
    scanf("%d%d",&a,&b);
    printsum(a,b);
    return 0;
}
void printsum(int x,int y){
    printf("Sum is :%d\n",x+y);
}