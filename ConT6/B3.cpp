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
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        int dem = 0;
        vector<II> res;
        for(int i = 0; i < n; i++){
            res.pb(mp(a[i],i));
        }
        sort(res.begin(), res.end());
        for(int i = 0; i < n; i++){
            while(i != res[i].se){
                swap(res[i].fi,res[res[i].se].fi);
                swap(res[i].se,res[res[i].se].se);     
                dem++;
            }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
        }
        cout<<dem<<endl;
   }
    return 0;
}
//Code by QT