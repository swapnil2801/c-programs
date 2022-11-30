//print the sum of first n natural no. and also print them reverse

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any no. ");
    scanf("%d", &n);
    int sum=0;
    
    //common operation

    for (int i=0,j=n;i<=n && j>=0 ;i++,j--){
        sum=sum+i;
        
        printf("%d\n",j);
    }
    printf("sum is %d", sum);


    //its seperate operation
    // for (int i=0;i<=n;i++){
    //    sum=sum+i;//sum+=1
    // }
    // printf("%d\n", sum);

    // for (int i=n;i>=0;i--){
    //     printf("%d\n",i);
    //     }
    

    return 0;

}