// find the greatest of three numbers.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three values \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        if (a>c){
            printf("a is greatest");
        } else{
            printf("c is greatest");
        }
    }else {
        if (b>c){
            printf("b is a greatest no");
        }else {
            printf("c is greatest no.");
        }return 0;
    }

}