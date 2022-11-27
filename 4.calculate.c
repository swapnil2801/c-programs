//calculate the percentage of student from three subjects.
#include <stdio.h>
float perc(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("Enter the marks of following subjects maths,science and sanskrit :");
    scanf("%d%d%d",&a,&b,&c);
    perc(a,b,c);
    printf("The percentage are :%f",perc(a,b,c));
    return 0;
}
float perc(int a,int b,int c){
    return ((a+b+c)/3);
}