//check whether a given year is leap or not.
#include <stdio.h>
int leapornot(int y);
int main()
{
    int year;
    printf("Enter any year :");
    scanf("%d",&year);
    leapornot(year);
    return 0;

}
int leapornot(int y){
  
    if(y%4==0){
        printf("%d is an leap year",y);
    }else {
        printf("%d id not a leap year",y);
    }
}