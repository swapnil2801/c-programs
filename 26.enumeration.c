#include <stdio.h>

enum Days { Monday =2,Tuesday ,Wednesday,Thursday};
int main()
{
    enum Days obj;
    printf("Size of enum : %d\n",sizeof(obj));
    printf("Monday : %d\n",Monday);
    printf("Tuesday : %d\n",Tuesday);
    printf("Wednesday : %d\n",Wednesday);
    printf("Thursday : %d\n",Thursday);
    return 0;
}