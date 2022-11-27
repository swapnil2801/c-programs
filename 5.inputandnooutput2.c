// inputs & no outputs
#include <stdio.h>
void printsum(int,int,char);
int main()
{
    int a,b;
    char base;
    printf("Enter the value of a and b :\n");
    scanf("%d%d",&a,&b);
    printf("Enter the base value (H,O,D):\n");
    scanf("%c\n",&base);
    printsum(a,b,base);
    return 0;
}
void printsum(int x,int y,char base)
{
    if (base=='H'){
        printf("The sum of %d and %d in hexadecimal is %d",x,y,x+y);
    }else if (base=='O'){
        printf("The sum of %d and %d in octal is %d",x,y,x+y);
    }else if (base=='D'){
        printf("The sum of %d and %d in decimal is %d",x,y,x+y);
    }
}