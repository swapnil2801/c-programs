#include <stdio.h>
struct Pointer
{
    int i;
    struct Pointer *ptr;
};

int main()
{
    struct Pointer obj1;
    struct Pointer obj2;
    struct Pointer obj3;

    obj1.i = 12;
    obj2.i = 11;
    obj3.i = 14;

    obj1.ptr = &obj2;
    obj2.ptr = &obj3;
    obj3.ptr = &obj1;


    printf("Value of i of obj1 is :%d\n",obj1.i);
    printf("Value of i of obj2 is :%d\n",obj2.i);
    printf("Value of i of obj3 is :%d\n",obj3.i);

    printf("Address of obj3 is :%u\n",obj1.ptr);
    printf("Address of obj1 is :%u\n",obj2.ptr);
    printf("Address of obj2 is :%u\n",obj3.ptr);

    return 0;
}