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
int dem = 0;

void dfs(int u, vector<int> vect[], int cc){
    visit[u] = 1;
    // cout<<u<<" ";
    for(int i = 0; i < vect[u].size(); i++){
        if(!visit[vect[u][i]] && vect[u][i] != cc){
            res[vect[u][i]] = 1;
            dfs(vect[u][i],vect,cc);
        }
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
        cin>>v>>e;
        vector<int> vect[1005];
        for(int i = 0; i < e; i++){
            int x,y;
            cin>>x>>y;
            vect[x].pb(y);
            vect[y].pb(x);
        }
        dem = 0;
        for(int i = 1; i <= v; i++){
            if(!res[i]){
                dfs(i,vect,0);
                dem++;
                memset(visit,0,sizeof(visit));
            } 
        }
        for(int cc = 1; cc <= v; cc++){
            int demtmp = 0;
            memset(res,0,sizeof(res));
            for(int i = 1; i <= v; i++){
                if(i == cc) continue;
                if(!res[i]){
                    dfs(i,vect,cc);
                    demtmp++;
                    memset(visit,0,sizeof(visit));
                } 
            }
            if(demtmp != dem) cout<<cc<<" ";
        }
        cout<<endl;
   }
    return 0;
}
//Code by QT