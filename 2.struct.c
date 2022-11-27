#include <stdio.h>

struct Demo
{
    int Arr[3];
    int Brr[4];
};

int main()
{
    struct Demo obj;

    printf("Size of structure is :%d\n",sizeof(obj));

    obj.Arr[0] = 12;
    obj.Brr[3] = 13;

    printf("Value of Arr[0] is :%d",obj.Arr[0]);


    return 0;
}