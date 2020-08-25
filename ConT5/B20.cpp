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

ll sol(string s){
    int n = s.size();
    ll l = s[0]-'0';
    ll res = l;
    ll c = 0;
    for(int i = 1; i < n; i++){
        int now = s[i]-'0';
        c = (i+1)*now + l*10;
        res+=c;
        l=c;
    }
    return res;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        cout<<sol(s)<<endl;
   }
    return 0;
}
//Code by QT