#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x=90,y=78;
    printf("\nBefore swappin x=%d and y=%d\n",x,y);
    swap(&x,&y);
    printf("\nAfter swapping two number x=%d nad y=%d\n",x,y);
    return 0;
}