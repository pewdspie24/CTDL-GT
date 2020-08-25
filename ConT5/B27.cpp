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

int f[1005][1005];

int sol(int n, int c, vi a, vi b){
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= c; j++){
            if(i == 0 || j == 0) f[i][j] = 0;
            else if(a[i-1] <= j) f[i][j] = max(b[i-1] + f[i-1][j-a[i-1]], f[i-1][j]);
            else f[i][j] = f[i-1][j];
        }
    }
    return f[n][c];
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n,v, tmp;
        cin>>n>>v;
        vi a;
        vi c;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            a.pb(tmp);
        }
        for(int i = 0; i < n; i++){
            cin>>tmp;
            c.pb(tmp);
        }
        cout<<sol(n,v,a,c)<<endl;
   }
    return 0;
}
//Code by QT