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

int ins, del, cop, n;
ll dp[limit];

void init(){
    for(int i = 0; i < limit; i++) dp[i] = 0;
}

ll sol(){
    if(n == 1) return ins;
    dp[1] = ins;
    for(int i = 2; i <= n; i++){
        if(i%2) dp[i] = min(dp[i-1]+ins, dp[(i+1)/2]+cop+del);
        else dp[i] = min(dp[i-1] + ins, dp[i/2] + cop);
    }
    return dp[n];
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        cin>>n>>ins>>del>>cop;
        init();
        cout<<sol()<<endl;
   }
    return 0;
}
//Code by QT