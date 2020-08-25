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

vll sol;
map <ll,ll> mymap;

void generate(){
    ll i = 1, dem = 0;
    sol.pb(i);
    mymap[i] = 0;
    while(dem < 50){
        i*=2;
        sol.pb(i);
        dem++;
        mymap[i] = dem;
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    generate();
    while(T--){
        ll n,k;
        cin>>n>>k;
        ll tmp = sol.size()-1;
        ll res;
        while(true){
            // cout<<sol[tmp]<<" ";
            if(k < sol[tmp]) tmp--;
            if(k == sol[tmp]){
                res = mymap[sol[tmp]]+1;
                break;
            }
            if(k > sol[tmp]) k-=sol[tmp];
            if(tmp == 0){
                res = 1;
                break;
            }
        }
        cout<<res<<endl;;
   }
    return 0;
}
//Code by QT