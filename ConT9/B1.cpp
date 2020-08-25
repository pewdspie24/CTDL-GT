#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ONLY_CPP ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        map<int,vi> mymap;
        int x,y;
        cin>>x>>y;
        int tmp1, tmp2;
        for(int i = 1; i <= x; i++){
            mymap[i].pb(0);
        }
        for(int i = 0; i < y; i++){
            cin>>tmp1>>tmp2;
            mymap[tmp1].pb(tmp2);
            mymap[tmp2].pb(tmp1);
        }
        for(auto i:mymap){
            cout<<i.fi<<": ";
            sort(i.se.begin(), i.se.end());
            for(int j = 0; j < i.se.size(); j++){
                if(i.se[j] != 0)
                cout<<i.se[j]<<" ";
            }
            cout<<endl;
        }
   }
    return 0;
}
//Code by QT