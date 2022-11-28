#include <stdio.h>
int main()
{
    int no1=10;
    int no2=20;
    int x=0;

    x=++no1;
    printf("%d\n",x);  
    x=no1++;
    printf("%d\n",x);

    x=no2++;
    printf("%d\n",x);
    x=++no2;
    printf("%d\n",x);


    return 0;
}