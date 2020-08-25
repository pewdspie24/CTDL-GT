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

int n,m;
ll dp[1005][1005];

void init(){
    for(int i = 0; i < 1005; i++)
    for(int j = 0; j < 1005; j++) dp[i][j]=0;
}

ll sol(){
    for(int i = 0; i <= n; i++){
        dp[i][0] = 1;
    }
    for(int i = 0; i <= m; i++){
        dp[0][i] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            dp[i][j] = dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[n][m];
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        cin>>n>>m;
        init();
        cout<<sol()<<endl;
   }
    return 0;
}
//Code by QT