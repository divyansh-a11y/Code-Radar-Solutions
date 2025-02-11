#include<stdio.h>
int main()
{
    char ch=A;
   // printf("ch=A");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("Uppercase");
    else if(ch>='a'&&ch<='z')
    printf("Lowercase");
    else
    printf("Not an alphabet");

}