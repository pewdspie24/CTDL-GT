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

bool f[limit];

void init(){
    for(int i = 0; i < limit; i++) f[i] = 0;
}

void sol(vi a, int sum, int n){
    f[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = sum; j >= a[i]; j--){
            if(f[j] == 0 && f[j-a[i]] == 1 ) f[j]=1;
        }
    }
    for(int i = sum; i >= 0; i--){
        if(f[i] == 1){
            cout<<i;
            return;
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int c,n,temp;
    vi a;
    cin>>c>>n;
    for(int i = 0; i < n; i++){
        cin>>temp;
        a.pb(temp);
    }
    init();
    sol(a,c,a.size());
    return 0;
}
//Code by QT