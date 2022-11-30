//Print the table of number input by the user

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any no. :");
    scanf("%d", &n);
    
    for(int i=1;i<=10;i++){
    printf("%d\n", n*i);
    }
    return 0;

}