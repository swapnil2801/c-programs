#include <stdio.h>
void fun()
{
    printf("Instde fun\n");
}
int main()
{
    fun();

    void (*fptr)();
    //fptr is a pointer which pointes to the
    //function that function accepts nothing 
    //and taht function return nothing.
    fptr =fun;

    fptr();

    return 0;
}