#include <stdio.h>
void fun(int);
int main()
{
    fun(10);
    return 0;
}
void fun(int l)
{
    auto int i;
    auto int j=10;
    int k=30;
    printf("Scope of auto variables starts from here in function fun\n");
    printf("\nDefault value of uninitialised auto variable is %d\n",i);
    printf("\nScope of auto variable ends here in function fun\n");
}