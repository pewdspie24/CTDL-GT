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
        vi in;
        map<int,int> mymap;
        for(int i = 0; i < n1; i++){
            cin>>a1[i];
            if(!mymap[a1[i]]) mymap[a1[i]] = 1;
        }
        for(int i = 0; i < n2; i++){
            cin>>a2[i];
            if(!mymap[a2[i]]) mymap[a2[i]]= 1;
            else in.pb(a2[i]);
        }
        for(int i = 0; i <= 100000; i++){
            if(mymap[i]) cout<<i<<" ";
        }
        cout<<endl;
        for(int i = 0 ; i < in.size(); i++) cout<<in[i]<<" ";
        cout<<endl;
        in.clear();
        mymap.clear();
   }
    return 0;
}
//Code by QT