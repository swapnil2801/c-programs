//Write a C program to input any alphabet and check whether it is vowel or consonant.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any variable\n");
    scanf("%c",&ch);
    if (ch=='i' || ch=='o'|| ch=='u' || ch=='e' || ch=='a'){
        printf("Entered variable is vowel");
       
    }else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        printf("Entered variable is consonant");
    }else if(ch>='1' && ch<='9'){
        printf("Entered variable is digit");
    }else {
        printf("Entered variable is character");
    }
    return 0;
}