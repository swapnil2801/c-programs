// the efect of return statement inside the function:
#include <stdio.h>
void printsum();
int main()
{
    printsum();
}
void printsum()
{
    printf("the satement before return statement ");
    return;
    printf("The statement after return statement "); //this statment not print because the return statement is before it.

}