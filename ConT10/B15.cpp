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
const int N = 1e2 + 5;
const int INF = 1e9 + 5;

int n,m,start;

struct edeg{
    int u,v,w;
};

vector <edeg> a;
int dist[N];
int res[N][N];

void input(){
    cin >> n >> m >> start;
    memset(res,0,sizeof(res));
    for(int i = 0 ; i <= n ; i++)
        dist[i] = INF;
    a.clear();

    for(int i = 0 ,x,y,z; i < m ; i++){
        edeg tmp;
        cin >> tmp.u >> tmp.v >> tmp.w; 
        a.pb(tmp);
    }
}
bool CT_Am(){
    for(int i = 0 ; i < a.size() ; i++){
        int u = a[i].u;
        int v = a[i].v;
        int w = a[i].w;
        if(dist[v] > dist[u] + w)
            return false;
    }
    return true;
}
void solve(){
    dist[start] = 0;
    for(int j = 1 ; j < n ; j++){
        for(int i = 0 ; i < a.size() ; i++){
            int u = a[i].u;
            int v = a[i].v;
            int w = a[i].w;
            if(dist[v] > dist[u] + w)
                dist[v] = dist[u] + w;
        }
    }
    if(CT_Am() == false){
        cout << -1;
    }
    else{
        for(int i = 1 ; i <= n ; i++){
            if(dist[i] == INF) cout << "INFI ";
            else cout << dist[i] << ' ';
        }
    }
    cout << '\n';
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        input();
        solve();
   }
    return 0;
}
//Code by QT