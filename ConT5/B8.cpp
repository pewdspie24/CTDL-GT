#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
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

int dp[1000][1000];
int a[1000][1000];

void init(int n, int m){
    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++) dp[i][j]=a[i][j];
}

void solve(int n, int m){
    int maxx = 0;
    for(int i = 0; i < n; i++){
        if(i == 0) continue;
        for(int j = 0; j < m; j++){
            if(j == 0) continue;
            if(a[i][j] == 0) continue;
            else{
                dp[i][j] = min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
                maxx = max(maxx,dp[i][j]);
            }
        }
    }
    cout<<maxx<<endl;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m; // n la so hang, m la so cot
        for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin>>a[i][j];
        init(n,m);
        solve(n,m);
   }
    return 0;
}
//Code by QT