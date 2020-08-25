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

vi a[1005];
int visited[1005];
vector<II> res;

void BFS(int u, int n){
    queue<int> q;
    // cout<<u<<" ";
    visited[u] = 1;
    q.push(u);
    while(!q.empty()){
        int v = q.front();
        // cout<<v<<" ";
        q.pop();
        for(int i : a[v]){
            if(!visited[i]){
                visited[i] = 1;
                q.push(i);
                res.pb(mp(v,i));
            }
        }
    }
}

void sol(int t, int v){
    bool kt = false;
    for(int i = 1; i <= v; i++){
        if(!visited[i]){
            kt = true;
            break;
        }
    }
    if(kt){
        cout<<"-1"<<endl;
        return;
    }
    else
    for(auto i:res){
        cout<<i.fi<<" "<<i.se<<endl;
    }
    return;
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        int v,e,u;
        memset(visited,0,sizeof(visited));
        memset(a,0,sizeof(a));
        res.clear();
        cin>>v>>e>>u;
        // vector<int> vect[1005];
        for(int i = 0; i < e; i++){
            int x,y;
            cin>>x>>y;
            a[x].pb(y);
            a[y].pb(x);
        }
        BFS(u,v);
        sol(u,v);
   }
    return 0;
}
//Code by QT