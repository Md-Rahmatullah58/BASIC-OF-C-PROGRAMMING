#include<stdio.h>
void swap(int,int);
int main()
{
    int a=34,b=89;
    printf("\nBefore swapping two number a=%d and b=%d\n",a,b);
    swap(a,b);
   // printf("\nAfter swapping two number a=%d and b=%d\n",a,b);
    return 0;
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping two number a=%d and b=%d\n",a,b);
}