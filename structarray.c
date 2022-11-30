#include <stdio.h>

struct Demo
{
    int i;
    double ch;
    double d; 
};
int main()
{
    struct Demo obj;

    printf("Size of structure is :%d\n",sizeof(obj));

    obj.i = 99;
    obj.ch = 'f';
    obj.d = 12.434234;

    printf("Value of i is :%d\n",obj.i);
    printf("Value of ch is :%c\n",obj.ch);
    printf("Value of d is :%lf\n",obj.d);



    return 0;
}