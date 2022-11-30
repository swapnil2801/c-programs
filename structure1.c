#include <stdio.h>
int main()
{
    struct Demo  //decleration
    {
        int i;
        float f;
        char ch;
        double d;
    };

    struct Demo obj1;  //memory allocation   
    struct Demo obj2;    //memory allocation

    
    obj1.i = 11;            //s
    obj1.f = 21.4;
    obj1.ch = 'A';
    obj1.d = 11.2323;
    obj2.i = 12;
    obj2.f = 12.4;
    obj2.ch = 'S';
    obj2.d = 11.9999;
    
    printf("Size of Demo is :%d\n",sizeof(obj1));

    printf("i of obj1 is :%d\n",obj1.i);
    printf("f of obj1 is :%f\n",obj1.f);
    printf("ch of obj1 is :%c\n",obj1.ch);
    printf("d of obj1 is :%lf\n",obj1.d);
    printf("i of obj2 is :%d\n",obj2.i);

    return 0;

}