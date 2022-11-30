//Break statement inside the for a loop
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the vale of a :");
    scanf("%d",&n);
    for (int i=1;i<100;i++){
        printf("%d\n",i);
        if(i==n)
        break;
        
    }return 0;
}