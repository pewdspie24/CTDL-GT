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

int visit[1005];
int res[1005];

void dfs(int u, vector<int> vect[]){
    visit[u] = 1;
    // cout<<u<<" ";
    for(int i = 0; i < vect[u].size(); i++){
        if(!visit[vect[u][i]]){
            res[vect[u][i]] = u;
            dfs(vect[u][i],vect);
        }
    }
}

void sol(int t, int s){
    if(res[t] == 0){
        cout<<"-1";
        return;
    } 
    int i = t;
    vi vec;
    vec.pb(t);
    while(res[i] != s){
        vec.pb(res[i]);
        i=res[i];
    }
    vec.pb(s);
    reverse(vec.begin(),vec.end());
    for(auto i:vec){
        cout<<i<<" ";
    }
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        int v,e,u,u1;
        memset(visit,0,sizeof(visit));
        memset(res,0,sizeof(res));
        cin>>v>>e>>u>>u1;
        vector<int> vect[1005];
        for(int i = 0; i < e; i++){
            int x,y;
            cin>>x>>y;
            vect[x].pb(y);
            vect[y].pb(x);
        }
        dfs(u,vect);
        sol(u1,u);
        cout<<endl;
   }
    return 0;
}
//Code by QT