#include <stdio.h>
struct Demo
    {
        int A;
        float B;
    };

struct Hello
{
    int C;
    float D;
    struct Demo dobj;
};

int main()
{
    
    struct Hello hobj;

    hobj.dobj.A = 12;
    hobj.d  obj.B = 55.2;
    hobj.C = 13;
    hobj.D = 15.2;


    printf("Size of struct Hello is :%d\n",sizeof(struct Hello));
    printf("Value of A is  %d\n",hobj.dobj.A);
    printf("Size of structure Demo is :%d\n",sizeof(struct Demo));

    return 0;

}