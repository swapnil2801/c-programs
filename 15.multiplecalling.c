#include <stdio.h>
int add();
int main()
{
    add();
    printf("Hello\n");
    add();
    printf("Hello\n");
    add();
    return 0;
}
int add(){
    int a,b,c=0;
    printf("Enter any two numbers :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is :%d\n",c);


}