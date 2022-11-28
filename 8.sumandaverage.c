//the proframe for read the marks of 5 students to calculate their sum and average:

#include <stdio.h>
int main()
{
    int marks[5];
    int sum=0,i;
    float avg;
    printf("Enter the marks of students :");
    for (i=0;i<5;i++){
        scanf("%d\n",&marks[5]);
    }for (i=0;i<5;i++){
        sum+=marks[5];
    }printf("Sum of marks is %d\n",sum);
    avg=sum/5;
    printf("Average of marks is %f",avg);
    return 0;
}