#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define QT NN

using namespace std;

typedef double ld;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;

const ld pi=2*acos(0);
const int im = INT_MAX;
const int in = INT_MIN;
const int limit = 1e5+5;
const ll M = 1e9+7;

ll sol(int n, int k){
    int f[k+1];
    memset(f,0,sizeof f);
    f[0] = 1;
    for(int i = 0; i <= n; i++)
    for(int j = min(i,k); j > 0; j--) f[j] = (f[j]%M + f[j-1]%M)%M;
    return f[k];   
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        cout<<sol(n,k)<<endl;
   }
    return 0;
}
//Code by QT