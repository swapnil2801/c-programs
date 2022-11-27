#include <stdio.h>
void GST(float value);
int main(){
    int value;
    printf("Enter the amount :");
    scanf("%d",&value);
    GST( value);
    return 0;

}
void GST(float value){
     value =value+(0.18*value);
    printf("Total amount encluding GST is %f",value);
}