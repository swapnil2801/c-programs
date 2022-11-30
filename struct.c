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

    printf("Size of structure is :%d",sizeof(obj));

    return 0;
}