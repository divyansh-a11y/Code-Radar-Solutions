#include<stdio.h>
int main()
{
    int n=55;
    scanf("%d",&n);
    if(n%5==0&&n%11==0)
    printf("Divisible");
    else
    printf("Not Divisible");
}