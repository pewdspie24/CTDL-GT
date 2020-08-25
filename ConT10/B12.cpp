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

int n,m;
int mstSet[limit];  // kiểm tra đỉnh được duyệt
int dist[limit];    // trọng số tại đỉnh
int parent[limit];  // cha của đỉnh 
int a[505][505];

int findKey(){ 
    int minn = im,min_index;
    for(int i = 1 ; i <= n ; i++){
        if(mstSet[i] == false && dist[i] < minn){
            minn = dist[i];
            min_index = i;
        }
    }
    return min_index;
}


void solve(){
    parent[1] = -1;
    dist[1] = 0;
    for(int i = 0 ; i < n - 1; i++){
        int u = findKey();
        mstSet[u] = true;
        for(int v = 1 ; v <= n ; v++){
            if(a[u][v] && mstSet[v] == false && a[u][v] < dist[v]){
                parent[v] = u;
                dist[v] = a[u][v];
            }
        }
    }
    ll ans = 0;
    for(int i = 2 ; i <= n ; i++){
        ans += a[i][parent[i]];
    }
    cout<<ans<<endl;
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        cin>>n>>m;
        for(int i = 0 ; i <= n ; i++){
            dist[i] = im;
            mstSet[i] = false;
        }
        memset(a,0,sizeof(a));
        for(int i = 0,x,y,z; i < m ; i++){
            cin >> x >> y >> z;
            a[x][y] = z;
            a[y][x] = z;
        }
        solve();
   }
    return 0;
}
//Code by QT