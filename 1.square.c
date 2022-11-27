//Write a program in C to find the square of any number using the function'
#include <stdio.h>
#include <math.h>

void square(int a);
int main()
{
    int a;
    printf("Enter any number :");
    scanf("%d",&a);
    square(a);

}
void square(int a){
    printf("The square of %d is :%f",a,pow(a,2));
    
}