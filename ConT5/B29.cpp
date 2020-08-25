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

int f[limit];

void init(){
    for(int i = 0; i < limit; i++) f[i] =0;
}

int sol(string s){
    int n = s.size();
    if(s[0] == '0') return 0;
    f[0]=1;
    f[1]=1;
    for(int i = 2; i <=n; i++){
        if(s[i-1] != '0') f[i]=f[i-1];
        if(s[i-2]=='1' || s[i-2] == '2' && s[i-1] < '7') f[i] +=f[i-2];
    }
    return f[n];
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        init();
        cout<<sol(s)<<endl;
   }
    return 0;
}
//Code by QT