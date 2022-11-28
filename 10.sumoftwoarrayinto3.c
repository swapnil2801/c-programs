//write the program to read two array and their sum added into third arry;

#include <stdio.h>
int main()
{
    int arr1[5],arr2[5],sumarr[5];
    int i;
    printf("Enter value of arr1 :\n");
    for (i=0;i<5;i++)
        scanf("%d",&arr1[i]);
    printf("\nEnter value of arr1 :\n");
    for (i=0;i<5;i++)
        scanf("%d",&arr2[i]);
    for (i=0;i<5;i++){
        sumarr[i]=arr1[i]+arr2[i];
        printf("sum of arr1 and arr2 of %d index is :%d\n",i,sumarr[i]);
    }return 0;
}