#include <stdio.h>
int main()
{
    int Arr[4] ={10,20};

    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]); // gets value 0
    printf("%d\n",Arr[3]); // gets value 0

    int Brr[4];
    Brr[0] =10;
    Brr[1] =20;

    printf("\n%d\n",Brr[0]);
    printf("%d\n",Brr[1]);
    printf("%d\n",Brr[2]); //garbage value
    printf("%d\n",Brr[3]); //garbage value

    return 0;

}