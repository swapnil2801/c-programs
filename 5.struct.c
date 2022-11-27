#include <stdio.h>
struct Demo
{
    int i;
    int f;
};
int main()
{
    struct Demo arr[3];

    arr[0].i = 10;
    arr[1].f = 13.44;

    printf("Value of i in arr[0] is :%d",arr[0].i);

    return 0;
} 