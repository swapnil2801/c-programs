#include <stdio.h>
int main()
{
    struct Demo
    {
        int *ptr;
        float *ftr;
    };

    int  no = 11;
    float f = 11.4;

    struct Demo obj;

    obj.ptr = &no;
    obj.ftr = &f;

    printf("%d\n",obj.ptr);
    printf("%d\n",obj.ftr);

    return 0;

}