#include<stdio.h>
int sum();
int main()
{
    int result;
    printf("calculate sum of two number :");
    result=sum();
    printf("sum of two number =%d",result);
    return 0;
}
int sum()
{
    int a=90,b=67;
    return a+b;
}
