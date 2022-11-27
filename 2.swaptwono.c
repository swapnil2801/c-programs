//Write a program in C to swap two numbers using function.
#include <stdio.h>
int swap(int x,int y);
int main()
{
    int a,b;
    printf("Enter any two numbers that you want to print swap:");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}
int swap(int x,int y){
    int z;
    z=x;
    x=y;
    y=z;
    printf("after swap the number is %d & %d",x,y);

}