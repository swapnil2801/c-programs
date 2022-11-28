//calling by value to function.
#include <stdio.h>
int fun(int ,int );
int main()
{
    int x=5,y=7;
    fun(x,y);
    printf("x=%d : y=%d",x,y);
    return 0;
}
int fun(int x,int y){
    x=7;
    y=5;
    printf("x=%d : y=%d\n", x,y);
}