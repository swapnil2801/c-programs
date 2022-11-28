//find the number is polidrome or not ;
#include <stdio.h>
int polidrome(int n);
int main()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    polidrome(n);
    return 0;
}
int polidrome(int n){
    int digit,rvr=0,temp;
    temp=n;
    while(temp!=0){   
    digit=temp%10;
    temp=temp/10;
    rvr=rvr*10+digit;}
    if(n==rvr){
        printf("Entered number is polidrome");
    }else {
        printf("Entered number is not polydrome");
    }
    
    

}