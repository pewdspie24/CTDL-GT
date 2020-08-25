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

vector<vi> a;
void solve() {
	int n, m;
    cin>>n>>m;
    a = vector<vi>(n+1);
    for(int i=0;i<m;i++){
        int x,y;
        cin>> x >>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i=0;i<n;i++){
        if(a[i].empty()) continue;
        for(int j=0;j<a[i].size();j++){
            int x = a[i][j];
            if(a[i].size() != a[x].size()){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
	cout<<"YES"<<endl;
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        solve();
   }
    return 0;
}
//Code by QT