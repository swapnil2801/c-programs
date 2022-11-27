//Set the corresponding bits.
#include <stdio.h>
int main()
{
    int  val,key;
    printf("enter the value of val and key: ");
    scanf("%d%d",&val,&key);
    val=val|key;
    printf("%d",val);
    return 0;
}