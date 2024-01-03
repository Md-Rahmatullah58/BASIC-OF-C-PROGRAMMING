#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping number a=%d and b=%d\n",a,b);
    swap(&a,&b);
   // printf("\nAfter swapping two numbers a=%d and b=%d\n",a,b);
    return 0;
}
void swap(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
printf("\nAfter swapping two numbers a=%d and b=%d\n",*a,*b);

}