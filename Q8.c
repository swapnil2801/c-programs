//Search on what a "nested loop" is & print this pattern using it.
//*****
//*****
//*****
#include <stdio.h>
int main()
{
    for (int i=1;i<=3;i++) {
        for (int j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}