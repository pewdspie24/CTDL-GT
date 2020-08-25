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

int n;
vector<II> a;
int f[limit];

int sol(){
    int res = 1;
    for(int i = 0; i < n; i++){
        f[i] = 0;
        for(int j = i-1; j >= 0; j--){
            if(a[i].fi > a[j].se) f[i] = max(f[i],f[j]);
        }
        f[i]++;
        res = max(res,f[i]);
    }
    return res;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        II pairr;
        int x,y;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>x;
            cin>>y;
            if(x>y){
                pairr.fi = y;
                pairr.se = x;
            }
            else{
                pairr.fi = x;
                pairr.se = y;
            }
            a.pb(pairr);
        }
        sort(a.begin(),a.end());
        cout<<sol()<<endl;
        a.clear();
   }
    return 0;
}
//Code by QT