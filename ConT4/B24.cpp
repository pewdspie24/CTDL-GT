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
const ll M = 123456789;

ll sol(ll a, ll b){
    a%=M;
    if(b==0) return 1;
    if(b%2 == 0){
        ll tmp = sol(a,b/2);
        return (tmp*tmp)%M;
    }
    else{
        ll tmp = sol(a,b-1);
        return (a*tmp)%M;
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        cout<<sol(2,n-1)<<endl;
   }
    return 0;
}
//CT 2^(n-1)
//Code by QT