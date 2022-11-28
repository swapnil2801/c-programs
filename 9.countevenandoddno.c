//write the program to read 10 integers and count the even and odd numbers:
#include <stdio.h>
int main()
{
    int integer[10];
    int i,count1=0,count2=0;
    printf("Enter the 10 integers :");
    for(i=0;i<10;i++){
        scanf("%d",&integer[i]);
    }for (i=0;i<10;i++){
        if(integer[i]%2==0){
            count1++;}
            else
            count2++;      
    }
    printf("The even numbers are :%d",count1);
    //for (i=0;i<10;i++){
      //  if(integer[i]%2!=0){
        //    count2++;} }
    printf("\nThe odd numbers are :%d",count2);
    return 0;
}