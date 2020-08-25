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

int a[limit];
int n;
int f[limit];

void init(){
    for(int i = 0; i < limit; i++) f[i] = 0;
}

int sol(){
    int res = 1;
    for(int i = 0; i < n; i++){
        f[i] = 0;
        for(int j = i-1; j >= 0; j--){
            if(a[j] <= a[i]) f[i] = max(f[i],f[j]);
        }
        f[i]++;
        res = max(res,f[i]);
    }
    return n-res;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        cin>>n;
        for(int i = 0; i < n ; i++){
            cin>>a[i];
        }
        cout<<sol()<<endl;
   }
    return 0;
}
//Code by QT