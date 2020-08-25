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

int a[1005], f[1005], n, k;

void init(){
    for(int i = 0; i < 1005; i++) f[i] = 0;
}

int dp(){
    f[0]=1;
    for(int i=1; i<=k; i++){
        for(int j=1; j<=n; j++){
            if(a[j]<=i){
                f[i]=(f[i]+f[i-a[j]])%M;
            }
        }
    }
    return f[k];
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        cin>>n>>k;
        for(int i=1; i<=n; i++) cin >> a[i];
        init();
        cout<<dp()<<endl;
   }
    return 0;
}
//Code by QT
