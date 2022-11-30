#include <stdio.h>

static int Global_satic = 10;
void fun_Normal()
{
    static int i = 10;
    printf("Value of i from fun_Normal is :%d\n",i);
    printf("Address of i is :%u\n",&i);
}
void Gun_Recursive_static()
{
    static int i = 5;
    i--;
    if(i!=0)
    {
        printf("in Gun_Recursion_static value of i is :%d\n",i);
        Gun_Recursive_static();
    }
}
void Gun_Recursive_auto()
    {
    auto int i = 5;
    i--;
    if (i!=0)
    {
        printf("in Gun_Recursion_auto value of i is :%d\n",i);
        Gun_Recursive_auto();
    }
}
int main()
{
    fun_Normal();
    fun_Normal();
    fun_Normal();
    Gun_Recursive_static();
    Gun_Recursive_auto();
    return 0;
}
