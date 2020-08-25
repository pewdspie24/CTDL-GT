#include <bits/stdc++.h>
#include <string.h>
#include <string>

#define pb push_back
#define FOR(i,n) for(i = 0; i < n; i++)
#define mp make_pair
#define fi first
#define se second

using namespace std;

typedef double ld;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;

const ld pi=2*acos(0);
const int im = INT_MAX;
const int in = INT_MIN;
const int limit = 1e5;

int t=0;
int color[limit], time[limit], back[limit];

void dfs(int n, int u){
    color[u] = 0;
    for (int v = 0; v < n; v++)
    {
        if(a[u][v] == 1 && color[v]) dfs(n,v);
    }
    
}
int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++) cin>>a[i][j];
        }
        for(int i = 0; i < n; i++){
            color[i] = 0;
        }
        sol(n,0);
        if(back[])
    }
    return 0;
}
//Code by QT