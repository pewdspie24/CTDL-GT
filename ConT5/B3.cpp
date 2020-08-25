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

bool sol(int n, int a[], int sum){
    f[sum] = 0; f[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = sum; j >= a[i]; j--){
            if(f[j] == 0 && f[j-a[i]] == 1 ) f[j]=1;
        }
    }
    return f[sum];
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n, s, tmp;
        cin>>n>>s;
        int a[1000];
        for(int i = 1; i <= n; i++){
            cin>>a[i];
        }
        init();
        if(sol(n,a,s) == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }
    return 0;
}
//Code by QT