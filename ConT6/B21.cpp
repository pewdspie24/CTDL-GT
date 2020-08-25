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
        int n, tmp;
        cin>>n;
        map<int,int> mymap;
        vector<II> a;
        for(int i = 0; i < n ;i++){
            cin>>tmp;
            mymap[tmp]++;
        }
        for (auto& kv : mymap){
            a.pb(mp(kv.se,kv.fi));
        }
        sort(a.begin(), a.end());
        for(int i = a.size()-1; i >= 0; i--){
            int kt = 0;
            vector<II> temp;
            temp.clear();
            int tmp = i;
            while(a[tmp-1].fi == a[tmp].fi){
                tmp--;
                kt = 1;
                if(tmp<0) break;
            }
            for(int k = tmp; k <= i; k++){
                temp.pb(mp(a[k].se,a[k].fi));
            }
            sort(temp.begin(), temp.end());
            for(int j = 0; j < temp.size(); j++){
                for(int k = 0; k < temp[j].se; k++) cout<<temp[j].fi<<" ";
            }
            i = tmp;
        }
        mymap.clear();
        a.clear();
        cout<<endl;
   }
    return 0;
}
//Code by QT