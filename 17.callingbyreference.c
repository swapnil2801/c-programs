//calling by reference to function.
#include <stdio.h>
int fun(int* ,int* );     //* is an pointer variable
int main()
{
    int x=5,y=7;
    fun(&x,&y);           //& is and address of operator and it directly change the value in main function
    printf("x=%d : y=%d",x,y);
    return 0;
}
int fun(int*x,int*y){
    *x=7;
    *y=5;
    printf("x=%d : y=%d\n", *x,*y);
}
