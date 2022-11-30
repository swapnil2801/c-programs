#include <stdio.h>
int main()
{
    int num=1,sum=0,count=1,n;
    printf("Enter the no :");
    scanf("%d",&n);
    while (count<=n)
    {
        for (int i=1;i<num;i++)
        {
            if (num%i==0)
                sum=sum+i;
        }
            if (num==sum)
            {
                printf("%d\t", num);
                count++;
            }
            num++;sum=0; 
    }  return 0;
  
}