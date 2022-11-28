//write a program to print first n natural odd numbers :

#include <stdio.h>
int main()
// {
//     int n,i;
//     printf("Enter the number to print odd numbers:");
//     scanf("%d",&n);
//     for (i=1;i<=n*2;i++){
//         if (i%2!=0){
//             printf("%d\n",i);
//         }
//     }return 0;
// }
            //or
// {
//     int n,i;
//     printf("Enter the number to print odd numbers:");
//     scanf("%d",&n);
//     for (i=1;i<=n;i++){
//         if (i%2!=0){
//             printf("%d\n",i*2);
//         }
//     }return 0;
// }

                //or
{
    int count=1,n,i=1;
    printf("Enter the number to print odd numbers:");
    scanf("%d",&n);
    while(count<=n*2){
        if(i%2!=0){
            printf("%d\n",i);}
            i++;
            count++;
    }
    return 0;

}