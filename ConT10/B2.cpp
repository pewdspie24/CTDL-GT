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
int v;

bool dfs(int u, vector<int> vect[], int dem){
    if(dem == v) return true;
    visit[u] = 1;
    // cout<<u<<" ";
    for(int i = 0; i < vect[u].size(); i++){
        if(!visit[vect[u][i]]){
            if(dfs(vect[u][i],vect,dem+1)) return true;
        }
    }
    visit[u]=0;
    return false;
}


int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        int e;
        memset(visit,0,sizeof(visit));
        cin>>v>>e;
        vector<int> vect[1005];
        for(int i = 0; i < e; i++){
            int x,y;
            cin>>x>>y;
            vect[x].pb(y);
            vect[y].pb(x);
        }
        bool kt = false;
        int dem;
        for(int i = 1; i <= v; i++){
            dem = 1;
            if(dfs(i,vect,dem)){
                kt = true;
                break;
            }
        }
        if(kt) cout<<1<<endl;
        else cout<<0<<endl;
   }
    return 0;
}
//Code by QT