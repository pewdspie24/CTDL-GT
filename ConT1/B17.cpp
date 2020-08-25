#include <bits/stdc++.h>
using namespace std;
long long sol(int a)
{
    long long b[10000],d;
    int i,n,m;
    b[0]=9;n=0;d=0;m=0;
    if (b[0]%a==0) d=b[0];
    else
    {
        while (d==0)
        {
            n=n+2;
            b[n-1]=b[m]*10;
            if (b[n-1]%a==0) d=b[n-1];
            b[n]=b[m]*10+9;
            if ((d==0) && (b[n]%a==0)) d=b[n];
            m++;
        }
    }
    return d;
}
int main()
{
    int i,n, a[100000];
    cin>>n;
    for (i=0;i<n;i++) cin>>a[i];
    for (i=0;i<n;i++) cout<<sol(a[i])<<endl;
    return 0;
}