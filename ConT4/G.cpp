#include <bits/stdc++.h>

using namespace std;
vector <unsigned long long> mu;

long long check(long long l,long long r,int n,long long nn)
{
    //cout << l << " " << r << " " << n << " " << nn <<endl;
    if (r<mu[n-1]) return check(l,r,n-1,nn/2);
    if (l==r && l==1) return 1;
    if (l==r && l==mu[n-1])return (nn&1);
    if (l==r) return (check(l/2,r/2,n-1,nn/2));
    if (l>mu[n-1]) return check(l-mu[n-1],r-mu[n-1],n-1,nn/2);
    if (l==mu[n-1]) return (nn&1) + check(1,r-mu[n-1],n-1,nn/2);
    if (r<mu[n-1]) return check(l,r,n-1,nn/2);
    if (r==mu[n-1]) return check(l,r-1,n-1,nn/2)+(nn&1);
    return (nn&1) + check(l,mu[n-1]-1,n-1,nn/2)+check(1,r-mu[n-1],n-1,nn/2);
}
void solve()
{
    long long n , r , l;
    cin >> n >> l >> r;
    int i=0;
    while (mu[i]<=n) i++;
    //cout << i <<endl;
    cout << check(l,r,i,n)<<endl;
}
int main()
{
    mu.resize(52);
    mu[0]=1;
    for (int i=1;i<=51;i++)
        mu[i]=mu[i-1]*2;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=0;
    cin >> t;
    //cout << check(3,3,2,2);
    while (t--) solve();
    return 0;
}
