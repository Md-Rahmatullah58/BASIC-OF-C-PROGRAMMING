#include<stdio.h>
int sum(int ,int);
int main()
{
    int a=23,b=89,result;
    result=sum(a,b);
    printf("sum of two number=%d",result);
    return 0;
}
int sum(int a, int b)
{
    return a+b;
}