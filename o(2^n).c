#include<stdio.h>
int main()
{
    int F(int n)
    
        if(n==0||n==1)
        return (n);
        else
        return (F(n-1)+F(n-2));
    
}