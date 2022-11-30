//print the no from 0 to n,if n is given by user

#include <stdio.h>
int main()
{
    
    int n;
    printf("Enter any no");
    scanf("%d" ,&n);
    //from while loop
    //int i=0;
    //while(i<=n){
        //printf("%d\n",i);
        //i++;

    //from for loop

    for(int i=0;i<=n;i++){
        printf("%d\n",i);
    }
    return 0;

    }
