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
        ll n,x,tmp;
        cin>>n>>x;
        vll a;
        vll :: iterator itr;
        for(int i = 0; i < n ; i++){
            cin>>tmp;
            a.pb(tmp);
        }
        ll dem = 0;
        sort(a.begin(), a.end());
        for(int i = 0; i < n-1; i++){
            itr = lower_bound(a.begin()+i, a.end(), a[i]+x);
            // cout<<itr-a.begin()<<endl;
            dem+=(itr-a.begin()-1)-i;
        }
        cout<<dem<<endl;
   }
    return 0;
}
//Code by QT