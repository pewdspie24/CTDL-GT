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
int dem;

void dfs(int u, vector<int> vect[]){
    visit[u] = 1;
    // cout<<u<<" ";
    dem++;
    for(int i = 0; i < vect[u].size(); i++){
        if(!visit[vect[u][i]]){
            dfs(vect[u][i],vect);
        }
    }
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        int v,e;
        memset(visit,0,sizeof(visit));
        cin>>v>>e;
        vector<int> vect[1005];
        vector<int> vectvh[1005];
        for(int i = 0; i < e; i++){
            int x,y;
            cin>>x>>y;
            vect[x].pb(y);
            vectvh[x].pb(y);
            vectvh[y].pb(x);
        }
        int kt = 0;
        for(int i = 1; i <= v; i++){
            dem = 0;
            dfs(i,vect);
            if(dem<v){
                kt = 1;
                break;
            }
            memset(visit,0,sizeof(visit));
        }
        dem = 0;
        memset(visit,0,sizeof(visit));
        dfs(1,vectvh);
        if(dem != v) cout<<"0"<<endl;
        else{
            int kt = 0;
            for(int i = 1; i <= v; i++){
                int tmp = 0;
                for(int j = 1; j <= v; j++){
                    if(j == i) continue;
                    else{
                        for(int k = 0; k < vect[j].size(); k++){
                            if(vect[j][k] == i) tmp++;
                        }
                    }
                }
                if(tmp != vect[i].size()){
                    kt = 1;
                    break;
                }
            }
            if(kt) cout<<"0"<<endl;
            else cout<<"1"<<endl;
        }
   }
    return 0;
}
//Code by QT