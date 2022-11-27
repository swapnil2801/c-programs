#include <stdio.h>
struct Demo
{
    int i;
    int f;
};
struct Hello
{
    int a;
    int b;
    struct Demo obj;
};
int main()
{
    struct Hello hobj;

    hobj.obj.i = 12;
    hobj.obj.f = 11;

    hobj.a = 14;
    hobj.b = 23;

    printf("The size of Hello struct is %d\n",sizeof(hobj));
    printf("Value of i is :%d\n",hobj.obj.i);
    printf("Value of a is :%d\n",hobj.a);

    return 0;
} 