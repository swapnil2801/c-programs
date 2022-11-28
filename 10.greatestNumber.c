//write program to print greatest number between 3 numbers :
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any 3 numbers :");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        if(a>c){
            printf("%d",a);
        }else{
            printf("%d",c);
        }  
    }else{
        if(b>c){
            printf("%d",b);
        }else{
            printf("%d",c);
        }
    }
    // if (a>b && a>c){
    //     printf("%d is greatest number ",a);
    // }else if (b>c){
    //     printf("%d is greatest number ",b);
    // }else{
    //     printf("%d is greatest number ",c);}
    return 0;
}