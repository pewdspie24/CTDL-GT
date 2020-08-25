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

int a[1005][1005];
int n,m;
int dp[1005][1005];

int sol(){
    dp[0][0] = a[0][0];
    for(int i = 1; i < n; i++) dp[i][0] = dp[i-1][0]+a[i][0];
    for(int i = 1; i < m; i++) dp[0][i] = dp[0][i-1]+a[0][i];
    for(int i = 1; i < n; i++)
    for(int j = 1; j < m; j++) dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))+a[i][j];
    return dp[n-1][m-1];
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        cin>>n>>m;
        for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin>>a[i][j];
        cout<<sol()<<endl;
   }
    return 0;
}
//Code by QT