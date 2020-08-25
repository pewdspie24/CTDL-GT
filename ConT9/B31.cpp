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
bool kt = false;

void dfs(int u, vector<int> vect[], int t){
    visit[u] = 1;
    // cout<<u<<" ";
    for(int i = 0; i < vect[u].size(); i++){
        if(!visit[vect[u][i]]){
            dfs(vect[u][i],vect,u);
        }
        else if(t!=vect[u][i]) kt = true;
    }
}

void sol(int v, vi vect[]){
    memset(visit,0,sizeof(visit));
    dfs(1,vect,0);
    if(kt){
        cout<<"NO"<<endl;
        return;
    } 
    for(int i = 1; i <= v; i++){
        if(!visit[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        memset(visit,0,sizeof(visit));
        kt = false;
        int v,e;
        cin>>v;
        e = v-1;
        vector<int> vect[1005];
        for(int i = 0; i < e; i++){
            int x,y;
            cin>>x>>y;
            vect[x].pb(y);
            vect[y].pb(x);
        }
        sol(v,vect);
   }
    return 0;
}
//Code by QT