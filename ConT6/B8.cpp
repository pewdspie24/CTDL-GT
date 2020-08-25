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

ll upperBound( ll arr[], ll n, ll x){
    ll low = 0, high = n-1, mid = 0;
    while (low<=high){
        if (low == 0 && arr[low] > x) return low;
        ll mid = low + ((high-low)/2);
        if (arr[mid-1] <= x && x < arr[mid]) return mid;
        else if (arr[mid] > x) high = mid-1;
        else low = mid+1;
    }
    return -1;
}

ll sol(ll X[], ll Y[], ll m, ll n){
    ll dem[5] ={0};
    for(int i = 0; i < n; i++) if(Y[i] < 5) dem[Y[i]]++;
    sort(Y,Y+n);
    ll res = 0, tmp = 0;
    for(ll i = 0; i < m; i++){
        if(X[i] == 0) continue;
        else if(X[i] == 1) res += dem[0];
        else if(X[i] == 2){
            tmp = upperBound(Y,n,X[i]);
            if(tmp == -1) res+=0; else res+=n-tmp;
            res = res + dem[0]+dem[1]-dem[3]-dem[4];
        } 
        else if(X[i] == 3){
            tmp = upperBound(Y,n,X[i]);
            if(tmp == -1) res+=0; else res+=n-tmp;
            res = res + dem[0]+dem[1]+dem[2];
        }
        else{
            tmp = upperBound(Y,n,X[i]);
            if(tmp == -1) res+=0; else res+=n-tmp;
            res = res + dem[0]+dem[1];
        }
    }
    return res;
} 
int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        ll m,n;
        cin>>m>>n;
        ll a[limit];
        ll b[limit];
        for(int i = 0; i < m; i++){
            cin>>a[i];
        }
        for(int i = 0; i < n; i++){
            cin>>b[i];
        }
        cout<<sol(a,b,m,n)<<endl;
   }
    return 0;
}
//Code by QT