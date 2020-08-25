#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define bep(smth) (smth).begin(), (smth).end()
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

int n, m, Q;
int a[105][105];
int dp[105][105];

void Floyd(){
	for(int k = 1; k <= n; k++){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(dp[i][j] > dp[i][k]+dp[k][j]){
					dp[i][j] = dp[i][k]+dp[k][j];
				}
			}
		}
	}
}

void solve() {
	Floyd();
	cin>>Q;
	int u, v;
	for (int i = 1; i <= Q; i++) {
		cin>>u>>v;
		cout<<dp[u][v]<<endl;
	}
}

int main ()
{
    ONLY_CPP
    cin>>n>>m;
	memset(a, 0, sizeof(a));
	for (int i = 1,u, v, z; i <= m; i++){
		cin>>u>>v>>z;
		a[u][v] = a[v][u] = z; 
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == j) dp[i][j] = 0;
			else{
				if(a[i][j] == 0){
					a[i][j] = dp[i][j] = M;
				}
				else{
					dp[i][j] = a[i][j];
				}
			}
		}
	}
    solve();
    return 0;
}
//Code by QT