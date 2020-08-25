#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define bep(smth) (smth).begin(), (smth).end()
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
const int N = 1e5 + 5;
const ll inf = 1e15 + 5;

int n,m;
priority_queue <pair<ll,ll> ,vector<pair<ll,ll> >,greater<pair<ll,ll> >> q;
vector <II> a[N];
ll cnt[N];
ll dist[N];

void Dijkstra(int u){
    cnt[u] = 1;
    dist[u] = 0;
    q.push({0,u});
    while(!q.empty()){
        ll minn = q.top().fi;
        u = q.top().se;
        q.pop();
        for(auto tmp : a[u]){
            int v = tmp.fi;
            int w = tmp.se;
            if(dist[v] == minn + w){
                cnt[v] += cnt[u];
            }
            else if(dist[v] > minn + w){
                dist[v] = minn + w;
                cnt[v] = cnt[u];
                q.push({dist[v],v});
            }
        }
    }
}

int main ()
{
    ONLY_CPP
    cin >> n >> m;
    for(int i = 0,x,y,z; i < m ; i++){
        cin >> x >> y >> z;
        a[x].pb({y,z});
        a[y].pb({x,z});
    }
    for(int i = 0 ; i <= n ; i++){
        cnt[i] = 0;
        dist[i] = inf;
    }
    Dijkstra(1);
    cout<<dist[n]<<" "<<cnt[n];
    return 0;
}
//Code by QT