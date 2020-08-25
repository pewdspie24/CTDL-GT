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

int f[105][50005];

void init(int n, int k){
    for(int i = 2; i <= n; i++)
    for(int j = 1; j <= k; j++) f[i][j] = 0;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n, k;
        cin>>n>>k;
        for(int i = 1; i <= k; i++){
            if(i <= 9) f[1][i]=1;
            else f[1][i]=0;
        }
        init(n,k);
        for(int i = 2; i <= n; i++)
        for(int j = 1; j <= k; j++)
        for(int num = 0; num <= 9; num++){
            if(num <= j)
            f[i][j] = (f[i][j] + f[i-1][j-num])%M;
            else break;
        }
        cout<<f[n][k]<<endl;
   }
    return 0;
}
//Code by QT