//Write a program to check if a number is prime or not.
#include <stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter any no. :");
    scanf("%d" ,&n);
    for ( i=1;i<=n;i++){
        if (n%i==0){
            c++;
            }
        }
        if (c==2){

         printf("is prime no");}
         else{
        
        printf(" is not prime no");
         }
        return 0;
}

    


