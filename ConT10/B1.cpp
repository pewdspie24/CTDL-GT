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

vector<int> a[105];
int color[105];
int n,m,d;

bool check(int u,int c){
	for(int i=0;i<a[u].size();i++)
		if(c==color[a[u][i]]) return false;
	return true;
}

bool Try(int u){
	if(u==n+1) return true;
	for(int c=1;c<=d;c++){
		if(check(u,c)){
			color[u]=c;
			if(Try(u+1)) return true;
			color[u]=0;
		}
	}
	return false;
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        for(int i = 0; i < 100; i++)
        a[i].clear();
        memset(color,0,sizeof(color));
        cin>>n>>m>>d;
        for(int i = 0; i < m; i++){
            int x,y;
            cin>>x>>y;
            a[x].pb(y);
            a[y].pb(x);
        }
        if(Try(1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }
    return 0;
}
//Code by QT