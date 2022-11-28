//write a function to print "Hot" or "cold" depend on the tempreture;
#include <stdio.h>
int hotorcold(int temp);
int main()
{
    int temp;
    printf("Enter the tempreture value :");
    scanf("%d",&temp);
    hotorcold(temp);
    return 0;
}
int hotorcold(int temp){
    if(temp<=50){
        printf("Its cold\n");
    }else{
        printf("Its hot");}
}