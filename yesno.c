#include<stdio.h>
void sum(int, int);
int main()
{
    int a=67,b=34;
    sum(a,b);
    return 0;
}
void sum(int a, int b)
{
    printf("sum of two number=%d",a+b);
}