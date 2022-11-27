 //A program that illustrates the evaluation of an arithmetic expression.
 #include <stdio.h>
 int main()
 {
    int a,b,c,d,e;
    printf("Enter the values :a,b,c,d,\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=a*b-c%d/a+c;
    printf("%d",e);
    return 0;

 }