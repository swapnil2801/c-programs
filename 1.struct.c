#include <stdio.h>

struct Demo
{
    int *p;
    int *q;
};

int main()
{
    int i = 12;
    int j = 10;

    struct Demo obj;

    printf("Size of structure is :%d\n",sizeof(obj));

    obj.p = &i;
    obj.q = &j;

    printf("Address of i is %u\n",obj.p);
    printf("Address of j is %u",obj.q);



    return 0;
}