/*An integer is said to be a perfect number if its factors 
(including 1) sum to thenumber, e.g. 6 is a perfect number as
6=1+2+3, 28 is a perfect number as 28=1+2+4+7+14 */

#include <stdio.h>
int main()
{
    int sum=0,num;
    printf("Enter any number :");
    scanf("%d",&num);
    for (int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }

    }if (num==sum){
        printf("%d is an perfect number",num);
    }else {
        printf("%d is an non perfect number",num);
    }return 0;

}