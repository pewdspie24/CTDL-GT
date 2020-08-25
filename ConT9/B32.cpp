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

int visited[1005][1005];
int L1[limit], L2[limit];
int n,m;
int a[500][500];

void dfs(int h, int c){
    visited[h][c]=1;
    for(int i = 0; i <= 7; i++){
        int tmph = h+L1[i];
        int tmpc = c+L2[i];
        if(tmph >= 0 && tmph < n && tmpc >= 0 && tmpc < m){
            if(a[tmph][tmpc] && !visited[tmph][tmpc]) dfs(tmph,tmpc);
        }
    }
}

void sol(){
    memset(visited,0,sizeof(visited));
    int dem = 0;
    for(int i = 0 ; i < n; i++){
        for(int j  =0; j < m; j++){
            if(a[i][j] && !visited[i][j]){
                dfs(i,j);
                dem++;
            }
        }
    }
    cout<<dem<<endl;
}

int main ()
{
    ONLY_CPP
    L1[0] = -1; L1[1] = -1; L1[2] = -1; L1[3] = 0; L1[4] = 0; L1[5] = 1; L1[6] = 1; L1[7] = 1;
    L2[0] = -1; L2[1] = 0; L2[2] = 1; L2[3] = -1; L2[4] = 1; L2[5] = -1; L2[6] = 0; L2[7] = 1;
    int T;
    cin>>T;
    while(T--){
        cin>>n>>m;
        memset(a,0,sizeof(a));
        for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin>>a[i][j];
        sol();
    }
    return 0;
}
//Code by QT