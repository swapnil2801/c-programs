#include <stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 3.14;
    double d = 9.567;
    printf("Values from variables :\n");
    printf("%c\n",ch);
    printf("%d\n",i);
    printf("%f\n",f);
    printf("%lf\n",d);

    printf("\nSize of each variable\n");
    printf("Size of character: %d\n",sizeof(ch));
    printf("Size of integer : %d\n",sizeof(i));
    printf("Size of float: %d\n",sizeof(f));
    printf("Size of double: %d\n",sizeof(d));

    printf("\nAddress of each variable \n");
    printf("Address of ch: %p\n",&ch);   //%p=pointer, hexadecimal format
    printf("Address of i: %d\n",&i);
    printf("Address of f: %lf\n",&f);
    printf("Address of d: %f\n",&d);
    return 0;
}