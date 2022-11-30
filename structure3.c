#include <stdio.h>
int main()
{
    struct Demo
    {
        int arr[3];
        float brr[2];
    };

    struct Demo obj;

    obj.arr[0] = 11;
    obj.arr[1] = 21;
    obj.arr[2] = 31;
    obj.brr[0] = 4.1;
    obj.brr[1] = 5.1;

    printf("%d\n",obj.arr[2]);
    printf("%f\n",obj.brr[1]);

    return 0;

}