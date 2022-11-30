#include <stdio.h>

struct Demo
{
    int i;
    struct Demo *ptr;
};
int main()
{
struct Demo obj1;
struct Demo obj2;
struct Demo obj3;

obj1.i = 9;
obj2.i = 23;
obj3.i = 12;

obj1.ptr = &obj2;
obj2.ptr = &obj3;
obj3.ptr = NULL;


return 0;

}
