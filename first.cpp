#include<iostream>
using namespace std;
int main()
{
    int n,r,c,s=0;
    cout<<"enter the number";
    cin>>n;
    c=n;
    while(n!=0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if(c==s)
    cout<<"Palindrom Number";
    else
    cout<<"not palindrom number";
}