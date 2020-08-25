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

int n, m, start;
int D[1005], parent[1005];
vector<II> a[1005];
priority_queue<II, vector<II>, greater<II> > Q;

void Dijkstra(int st){
	int u,v;
	for(int i=1;i<=n;i++) {
		D[i] = 1e9;
		parent[i] = -1;
	}
	D[st] = 0;
	while(!Q.empty()) Q.pop();
	Q.push({0,st});

	while(!Q.empty()){
		u = Q.top().second; Q.pop();
		for(int i=0; i<a[u].size();i++){
			v = a[u][i].second;
			int d_u_v = a[u][i].first;
			if(D[u] + d_u_v < D[v]){
				D[v] = D[u] + d_u_v;
				parent[v] = u;
				Q.push({D[v], v});
			}
		}
	}
	for(int i=1;i<=n;i++) cout << D[i] << " ";
    cout << endl;
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        int u,v,k;
        cin >> n >> m >> start;
        for(int i=0;i<=n;i++) a[i].clear();
        for(int i=1;i<=m;i++){
            cin >> u >> v >> k;
            a[u].push_back({k,v});
            a[v].push_back({k,u});
        }
        Dijkstra(start);
   }
    return 0;
}
//Code by QT