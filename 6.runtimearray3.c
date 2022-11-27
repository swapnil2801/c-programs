#include <stdio.h>
int main()
{
    int arr[100],i;
    for(i=0;i<100;i++){
        if (i<30){
            arr[i]=1;
        }else if(i>30 && i<65){
            arr[i]=6;
        }else{
            arr[i]=4;}
                }
    for (i=0;i<100;i++){
        if (i<30){
            printf("%d\n",arr[i]);
        }else if (i>30 && i<65) {
            printf("%d\n",arr[i]);
        }else{
            printf("%d\n",arr[i]);
        }
    }return 0;
}