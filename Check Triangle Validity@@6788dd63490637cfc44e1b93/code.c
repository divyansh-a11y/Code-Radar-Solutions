#include<stdio.h>
int main()
{
    int a=3,b=4,c=5;
    //printf("a=");
    scanf("%d",&a);
    //printf("\nb");
    scanf("%d",&b);
    //printf("\nc=");
    scanf("%d",&c);
    if((a+b)>c)
    printf("Valid");
    else
    printf("Invalid");
}