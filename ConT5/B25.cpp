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

ll sol(int sum, int k, int a[]){
    ll res[limit]={0};
    res[0] = 1;
    for(int i = 1; i <= sum; i++){
        for(int j = 0; j < k; j++)
            if(i >= a[j]) res[i] = (res[i] + res[i-a[j]]);
    }
    return res[sum];
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n,k=3;
        cin>>n;
        int a[105];
        for(int i = 1; i <= k; i++) a[i-1]=i;
        cout<<sol(n,k,a)<<endl;
   }
    return 0;
}
//Code by QT