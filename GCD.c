#include<stdio.h>
int gcd(int a, int b)
{
    int r=a%b;
    if(r==0)
    return b;
    else
    return gcd(b,r);
}
int main()
{
    int a,b,c;
    printf("\nEnter the value of a and b, c\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nResult=%d",gcd(gcd(a,b),c));
    return 0;
}