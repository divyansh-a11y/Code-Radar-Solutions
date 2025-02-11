#include<stdio.h>
int main()
{
    int a=50,b=40,c=30;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a>b)&&(a>c))
    printf("50");
    else if(b>c)
    printf("40");
    else
    printf("30")
}