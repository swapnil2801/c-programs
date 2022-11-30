#include <stdio.h>

extern int Addition (int , int);
int main()
{
    int iNo1 = 10;
    int iNo2 = 21;
    int add = 0;
    add=  Addition(iNo1 ,iNo2);
    printf("Addition of two numbers is %d\n",add);
    return 0;
}