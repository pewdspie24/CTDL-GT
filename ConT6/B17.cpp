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

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        ll n,m,tmp;
        cin>>m>>n;
        vll a;
        vll b;
        for(int i = 0; i < m; i++){
            cin>>tmp;
            a.pb(tmp);
        }
        for(int i = 0; i < n; i++){
            cin>>tmp;
            b.pb(tmp);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll sol = a[m-1]*b[0];
        cout<<sol<<endl;
   }
    return 0;
}
//Code by QT