#include<stdio.h>
int main()
{
    int year;
    printf("year=");
    scanf("%d",&year);
    if(year%4==0&&year%400==0)
    printf("Leap Year");
    else if(year%4!=0&&year%100!=0)
    printf("not a Leap Year");
    }