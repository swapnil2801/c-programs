//Run time array by reverse
#include <stdio.h>
int main()
{
    int a[5];
    int i;
    printf("Enter the number :\n");
    for (i=0;i<5;i++){
        scanf("%d\n",&a[i]);
    }printf("\vAll the values are :");
    for(i=5;i>=0;i--){
        printf("%d\n",a[i]);
    }return 0;
}