#include <stdio.h>
void table(int n);
int main() {
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    table(n);           //arguments (actual parameter)
    return 0;
}
void table(int n){      //parameter or (formal parameter)   
    for (int i=1;i<=10;i++){
    printf("%d\n",i*n);}
}