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

int dp[1005][1005];

int sol(string s1, string s2){
    int m = s1.size();
    int n = s2.size();
    for(int i = 0; i <= m; i++){
        dp[i][0] = i;
    }
    for(int j = 0; j <= n; j++){
        dp[0][j] = j;
    }
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
        }
    }
    return dp[m][n];
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    cin.ignore();
    while(T--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<sol(s1,s2)<<endl;
   }
    return 0;
}
//Code by QT