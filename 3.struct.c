#include <stdio.h>
struct Pointer
{
    int i;
    float f;
    double d;
};

int main()
{
    struct Pointer obj1;
    struct Pointer *ptr = NULL;

    ptr = &obj1;

    ptr->i = 12;
    ptr->f = 12.3;
    ptr->d = 12.999999;

    printf("Value of i is :%d\n",ptr->i);
    printf("Value of f is :%f\n",ptr->f);
    printf("Value of d is :%lf\n",ptr->d);

    return 0;
}