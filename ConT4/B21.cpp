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

ll sol (ll a, ll b, ll p){
    ll res = 1;
    while(b>0){
        if(b%2!=0) res=(res%p*a%p)%p;
        a = (a%p*a%p)%p;
        b/=2;
    }
    return res;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        cout<<sol(n,k,M)<<endl;
   }
    return 0;
}
//Code by QT