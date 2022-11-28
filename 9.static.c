#include <stdio.h>
void demo()
{
    auto int a = 10;
    a++;    //post increment ,the value is get refresh mean end of the operation the value same 
    printf("Value from demo of a is : %d\n",a);
}
void demo1()
{
    static int b = 10;
    b++;    //post increment ,the value is update because of static class
    printf("Value from demo1 of b is : %d\n",b);
}
int main()
{
    printf("The auto class\n");
    demo();
    demo();
    demo();
    printf("\vThe static (local) class\n");
    demo1();
    demo1();
    demo1();
    return 0;
}