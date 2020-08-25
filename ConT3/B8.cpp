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

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        vector <II> sol;
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        for(int i = 0; i < n; i++){
            cin>>b[i];
        }
        for(int i = 0; i < n; i++){
            sol.pb(mp(b[i],a[i])); // b là kết thúc
        }
        sort(sol.begin(), sol.end()); // sort theo pt đầu tiên trong pair, là thời gian kết thúc
        // int maxx = sol[sol.size()-1].fi;
        // int f1 = sol[0].se;
        int f2 = sol[0].fi;
        int dem = 1;
        for(int i = 1; i < sol.size(); i++){
            if(sol[i].se >= f2){
                dem++;
                f2 = sol[i].fi;
            }
        }
        cout<<dem<<endl;
        sol.clear();
   }
    return 0;
}
//Code by QT