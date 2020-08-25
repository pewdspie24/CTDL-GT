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

ll powM(ll a, ll b)
{
    // a%=M;
    if(b == 1) return a%M;
    ll res = powM(a,b/2);
    res = res*res%M;
    if(b%2==1) return res*a%M;
    return res;
    // if(b%2==0) return (res*res%M)%M;
    // return (a*res%M)*res%M;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        ll n1;
        cin>>n1;
        ll n2 = 0;
        ll tmp = n1;
        while(tmp!=0){
            ll a = tmp%10;
            n2=n2*10+a;
            tmp/=10;
        }
        cout<<powM(n1,n2)<<endl;
   }
    return 0;
}
//Code by QT