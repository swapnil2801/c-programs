#include <stdio.h>
int main()
{
   int n;
    do{   
    printf("enter any no :\n");
    scanf("%d",&n);
    printf("%d", n);
        if(n%7==0){
            break;
        }
    }while(1);
    printf("wrong input");
    return 0;
}