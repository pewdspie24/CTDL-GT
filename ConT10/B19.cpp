#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define bep(smth) (smth).begin(), (smth).end()
#define ONLY_CPP ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define QT NN

using namespace std;

typedef tuple<int,int,int> tp;
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
const int N =  505;
const int inf = 1e9 + 5;

int n,m;
int a[N][N];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dist[N][N];

priority_queue <tp,vector<tp>,greater<tp>> q;

bool check(int x,int y){
    return (1 <= x && x <= n && 1 <= y && y <= m);
}

void dijkstra(int x,int y){
    dist[x][y] = a[x][y];
    q.push(make_tuple(dist[x][y],x,y));
    while(q.size()){
        tp tmp = q.top(); q.pop();
        x = get<1>(tmp);
        y = get<2>(tmp);
        int w = get<0>(tmp);
        for(int i = 0 ; i < 4 ; i++){
            int u = x + dx[i];
            int v = y + dy[i];
            if(check(u,v)){
                if(dist[u][v] > a[u][v] + w){
                    dist[u][v] = a[u][v] + w;
                    q.push(make_tuple(dist[u][v],u,v));
                }
            }
        }
    }
}

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin >> a[i][j],dist[i][j] = inf;
    dijkstra(1,1);
    cout << dist[n][m] << '\n';
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        solve();
   }
    return 0;
}
//Code by QT