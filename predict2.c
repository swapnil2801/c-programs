#include <stdio.h>
int main()
{
    float Arr[] = {10.3,43.4,45.34,234.45};
    float *p = NULL;
    float *q = NULL;

    p = Arr;
    q = &(Arr[3]);

    printf("1 %d\n",p);
    printf("2 %d\n",q);
    printf("3 %f\n",*q);
    printf("4 %f\n",*p);
    printf("5 %f\n",*(p+2));
    printf("6 %f\n",*(p+1));
    printf("7 %f\n",p[1]);
    printf("8 %f\n",*(2+Arr));
    printf("9 %f\n",0[Arr]);
    printf("10 %f\n",q-p);
    printf("11 %f\n",*(q - 2));

    return 0;
}