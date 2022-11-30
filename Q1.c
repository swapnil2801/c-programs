#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter side a\n");
    scanf("%d", &a);
    printf("Enter side b\n");
    scanf("%d", &b);

    printf("The perimeter of rectangle is :%d",2*(a+b));
    return 0;
}