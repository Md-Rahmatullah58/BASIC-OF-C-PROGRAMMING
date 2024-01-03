#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("Enter the value of n and m:");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Hello World!\n");
        }
    }
    return 0;
}