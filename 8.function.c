#include <stdio.h>
int multiplication(int,int);
int main()
{
    int A=10,B=11;  //here also auto class is defined auto storage class memory at ram-stack /local 
    register int Ret=0;  //class storage ,class memory in registers 
    printf("Inside main function\n");
    Ret = multiplication(A,B);
    printf("Multiplication of A and B is :%d",Ret);
    return 0;
}
int multiplication(int No1,int No2)
{
    int Ans = 0;
    Ans = No1 * No2 ;
    return Ans ;
}