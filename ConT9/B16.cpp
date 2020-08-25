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

int visited[1005];
int res[1005];
int dem = 0;
int a[1005][1005];

void BFS(int u, int n){
    queue<int> q;
    // cout<<u<<" ";
    visited[u] = 1;
    q.push(u);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int i = 1; i <= n; i++){
            if(a[v][i] == 1 && visited[i] == 0){
                visited[i] = 1;
                q.push(i);
                res[i] = 1;
            }
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
        memset(visited,0,sizeof(visited));
        memset(a,0,sizeof(a));
        memset(res,0,sizeof(res));
        cin>>v>>e;
        // vector<int> vect[1005];
        for(int i = 0; i < e; i++){
            int x,y;
            cin>>x>>y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        dem = 0;
        for(int i = 1; i <= v; i++){
            if(!res[i]){
                int tmp = dem;
                BFS(i,v);
                dem++;
                memset(visited,0,sizeof(visited));
            } 
        }
        cout<<dem<<endl;
   }
    return 0;
}
//Code by QT