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
        int n1, n2;
        cin>>n1>>n2;
        int a1[n1];
        int a2[n2];
        vi u;
        map<int,int> mymap;
        for(int i = 0; i < n1; i++){
            cin>>a1[i];
            u.pb(a1[i]);
        }
        for(int i = 0; i < n2; i++){
            cin>>a2[i];
            u.pb(a2[i]);
        }
        sort(u.begin(), u.end());
        for(int i = 0; i < u.size(); i++){
            cout<<u[i]<<" ";
        }
        cout<<endl;
        u.clear();
        mymap.clear();
   }
    return 0;
}
//Code by QT