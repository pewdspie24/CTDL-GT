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

vector <int> a[100005];
bool vis[100005];
int n, m;

void DFS(int u , int &cnt ){
	vis[u] = true; cnt++;
	for (auto v : a[u]){
		if ( !vis[v] )
			DFS(v,cnt);
	}
}

void solve(){
	int res = 0;
	for( int i = 1; i <= n ; i++){
		if (vis[i] == false){
			int cnt = 0;
			DFS(i,cnt);
			res = max(res,cnt);
		}
	}
	cout<<res<< endl; 
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        cin >> n >> m;
        for(int i = 1; i <= 100005; i++){
            a[i].clear();
            vis[i] = false;
        }
        for(int i = 0 ; i < m ; i++){
            int u , v;
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        solve();
   }
    return 0;
}
//Code by QT