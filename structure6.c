#include <stdio.h>
struct Demo
    {
        int i;
        float f;
    };

int main()
{
    
    struct Demo Arr[3];

    Arr[0].i = 11;
    Arr[0].f = 21;

    Arr[1].i = 31;
    Arr[1].f = 41;
    
    Arr[2].i = 51;
    Arr[2].f = 61;

    printf("Size of whole array is :%d\n",sizeof(Arr));
    printf("Arr.i of o is %d\n",Arr[0].i);
    printf("Size of structure :%d\n",sizeof(struct Demo));

    return 0;

}