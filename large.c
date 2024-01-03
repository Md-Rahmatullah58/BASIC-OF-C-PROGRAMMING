#include<stdio.h>
void large(int a,int b);
int main()
{
    int a,b;
    printf("enter two number :");
    scanf("%d%d",&a,&b);
    large(a,b);
    return 0;
}
void large(int a,int b)
{
    if(a>b)
    {
printf("large number=%d",a);
    }
    else{
        printf("Not large number=%d",b);
    }
    //large(a,b);
}