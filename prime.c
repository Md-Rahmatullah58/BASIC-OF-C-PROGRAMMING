#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("\nEnter the number :\n");
    scanf("%d,&n");
    for(i=1;i<=n;i++)
    {
        if(n%j==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf(" is a prime number");
    }
    else
    {
        printf("is a not prime number");
    }
    return 0;
}