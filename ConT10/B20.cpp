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
const int N = 1e2 + 5;
const int inf = 1e6 + 5;

int n,m;
int a[N][N];
int dp[N][N];

void Floy(){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(i == j) dp[i][j] = 0;
            else{
                if(a[i][j] == 0)
                    dp[i][j] = inf;
                else
                    dp[i][j] = a[i][j];
            }
        }
    }
    for(int k = 1 ; k <= n ; k++){
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(dp[i][j] > dp[i][k] + dp[k][j])
                    dp[i][j] = dp[i][k] + dp[k][j];
            }
        }
    }
    int cnt = 0;
    double res = 0;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(i == j) continue;
            if(dp[i][j] != inf){
                cnt++;
                res += dp[i][j];
            }
        }
    }
    printf("%.2lf\n",res / cnt);
}

void solve(){
    cin >> n >> m;
    memset(a,0,sizeof(a));
    for(int i = 1,x,y ; i <= m ; i++){
        cin >> x >> y;
        a[x][y] = 1;
    }
    Floy();
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