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

int sol(string s1, string s2){
    for(int i = 0; i < 1005; i++){
        for(int j = 0; j < 1005; j++) f[i][j] = 0;
    }
    for(int i = 0; i < s1.size(); i++){
        for(int j = 0; j < s2.size(); j++){
            if(s1[i] == s2[j] && i != j) f[i+1][j+1] = f[i][j]+1;
            else f[i+1][j+1] = max(f[i][j+1],f[i+1][j]);
        }
    }
    return f[s1.size()][s2.size()];
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    cin.ignore();
    while(T--){
        string a;
        int tmp;
        cin>>tmp;
        cin>>a;
        cout<<sol(a,a)<<endl;
   }
    return 0;
}
//Code by QT