#include<stdio.h>
int main()
{
    int a=10,b=20,c=30;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a>b)&&(a>c))
    printf("a");
    else if(b>c)
    printf("b");
    else
    printf("c");
}