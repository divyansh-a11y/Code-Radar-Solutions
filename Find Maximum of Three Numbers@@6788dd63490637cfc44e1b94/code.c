#include<stdio.h>
int main()
{
    int a=-1,b=-2,c=-3;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a>b)&&(a>c))
    printf("-1");
    else if(b>c)
    printf("-2");
    else
    printf("-3");
}