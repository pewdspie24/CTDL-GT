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

int n,m,u;
vector<int> a[1005];
vector<II> res;
int vis[1005];

void DFS(int u){
    vis[u] = 1;
    for(int i = 0; i < a[u].size(); i++){
        if(vis[a[u][i]] == 0){
            res.pb(mp(u,a[u][i]));
            DFS(a[u][i]);
        }
    }
}


int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        cin >>n>>m>>u;
        for(int i = 0; i < 1005; i++) a[i].clear();
        memset(vis,0,sizeof(vis));
        res.clear();
        for(int i = 1; i <= m; i++){
            int x,y;
            cin>>x>>y;
            a[x].pb(y);
            a[y].pb(x);
        }
        DFS(u);
        bool kt = false;
        for(int i = 1; i <= n; i++){
            if(!vis[i]){
                kt = true;
                break;
            }
        }
        if(kt) cout<<"-1"<<endl;
        else
        for(auto u : res){
            cout<<u.fi<<" "<< u.se<<endl;
        }
   }
    return 0;
}
//Code by QT