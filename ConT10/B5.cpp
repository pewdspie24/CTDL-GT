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

int n,m,k;
map <tuple<int,int,int,int > ,bool> mymap;
int a[505][505] = {0};
int vis[505][505] = {0};
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};
vll res;
vector<II> sheep;

bool checker(int x , int y){
    return ( 1 <= x && x <= n && 1 <= y && y <= n);
}
void BFS(int r , int c){
    int cnt = 0;
    queue < II > q;    
    q.push(mp(r,c)); vis[r][c] = 1;
    while(!q.empty()){
        int x = q.front().fi;
        int y = q.front().se;
        q.pop();
        for(int i = 0 ; i < 4 ; i++){
            int u = x + dx[i];
            int v = y + dy[i];
            if ( checker(u,v)  && vis[u][v] == 0 && mymap[make_tuple(x,y,u,v)] == false ){
                q.push({u,v});
                vis[u][v] = 1;
                cnt += a[u][v];
            }
        }
    }
    res.push_back(cnt+1);
}
 
void solve(){
    for(auto x : sheep){
        if(vis[x.fi][x.se] == 0)
            BFS(x.fi,x.se);
    }
    vll dp(res.size() + 1 , 0);
    for(int i = 1 ; i <= res.size() ; i++)
        dp[i] = dp[i-1] + res[i-1];
    ll ans = 0;
    for(int i = 0 ; i < res.size() - 1 ; i++)
        ans += 1LL*res[i]*(dp[res.size()] - dp[i+1]);
    cout << ans ;
}

int main ()
{
    ONLY_CPP
    cin >> n >> k >> m;
    sheep.resize(k);
    for(int i = 1 ; i <= m; i++){
        int u,v,x,y;
        cin >> u >> v >> x >> y;
        mymap[make_tuple(u,v,x,y)] = true;
        mymap[make_tuple(x,y,u,v)] = true;
    }
    for(auto &x : sheep){
        cin >> x.fi >> x.se ;
        a[x.fi][x.se] = 1;
    }
    solve();
    return 0;
}
//Code by QT