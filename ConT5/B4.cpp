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

ll f[1001][1001];
vll a;
ll dem = 0, sum = 0;

ll sol(int k){
    int n = a.size();
    for(int i = 1; i < n; i++){
        for(int j = 1; j <=sum; j++){
            if(a[i] > j) f[i][j] = f[i-1][j];
            if(a[i] == j) f[i][j] = max(f[i-1][j],1ll);
            if(a[i] < j){
                if(f[i-1][j-a[i]] == 0) f[i][j] = 0; else f[i][j] = f[i-1][j-a[i]]+1;
                f[i][j] = max(f[i][j],f[i-1][j]);
            }
        }
    }
    ll res = -1;
    for(ll i = k; i <= sum; i+=k) res = max(res,f[n-1][i]);
    return res+dem;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n,k,tmp;
        dem = 0;
        sum = 0;
        cin>>n>>k;
        a.pb(0);
        for(int i = 0; i < n; i++){
            cin>>tmp;
            if(tmp%k==0) dem++;
            else{
                tmp%=k;
                a.pb(tmp);
                sum+=tmp;
            }
        }
        cout<<sol(k)<<endl;
        a.clear();
   }
    return 0;
}
//Code by QT