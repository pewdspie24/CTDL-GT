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

int n;

void sinh(string s){
    if(s.size() == n) cout<<s<<" ";
    else{
        sinh(s+'0');
        sinh(s+'1');
    }
}

void solve(){
    cin>>n;
    sinh("");
    cout<<endl;
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