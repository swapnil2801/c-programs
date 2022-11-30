// keep taking no. as input from user until user entered  an odd no.

#include <stdio.h>
int main()
{
    int n;
    do{
        printf("Enter any no. :");
         scanf("%d",&n);
         if (n%2!=0){
            break;
         }

    }while(1);
    printf("Odd no");
    
}