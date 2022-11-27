//function: It is the blocked name which consist of related statements that we can call.
#include <stdio.h>
void printsum();   //function decleration 
int main()
{
    printsum();     //function calling or arguments 
    return 0;
}
void printsum(){        //function defination or parameters 
    printf("The sum of 4 & 8 is :%d",4+5);
}
//its also a no input output function type 