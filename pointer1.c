#include <stdio.h>
void Maximumnu(int *a,int *b);
int main()
{
    int x,y;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&x,&y);
    Maximumnu(&x,&y);
    return 0;
}
void Maximumnu(int *a,int *b){
    if (*a>*b){
        printf("%d is an maximum number",*a);
    }else{
        printf("%d is an maximum number",*b);
    }
}