/*user defined function :It is the function which devloped
 by the programmer at the time of program write.*/

 #include <stdio.h>
 int sub(int,int);
 int add(int,int);
 int main()
 {
    int a,b;
    printf("Enter any two numbers :");
    scanf("%d%d",&a,&b);
    printf("The subtraction of %d and %d is :%d",a,b,sub(a,b));
    printf("\nThe addition of %d and %d is :%d",a,b,add(a,b));
    return 0;
 }
 int add(int x,int y){ 
    return x+y;
 }
 int sub(int x,int y){
    return x-y;
 }

