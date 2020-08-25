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

int check[1000][1000];
int arr[1000][1000];
int n,m;

void bfs(){
    queue <II> q;
    q.push({1,1});
    check[1][1] = 0;
    while(!q.empty()){
        II s = q.front() ; q.pop();
        if(check[s.fi][s.se + arr[s.fi][s.se]] == -1){
            check[s.fi][s.se + arr[s.fi][s.se]] = check[s.fi][s.se] + 1;
            q.push(mp(s.fi,s.se + arr[s.fi][s.se]));
        }
        if(check[s.fi + arr[s.fi][s.se]][s.se] == -1){
            check[s.fi  + arr[s.fi][s.se]][s.se] = check[s.fi][s.se] + 1;
            q.push(mp(s.fi+arr[s.fi][s.se],s.se));
        }
        if(check[n][m] != -1){
            return;
        }
    }
}

void init(){
    memset(check,-1,sizeof(check));
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        init();
        cin>>n>>m;
        for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++) cin>>arr[i][j];
        bfs();
        cout<<check[n][m]<<endl;
   }
    return 0;
}
//Code by QT