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

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int tmp;
        if(k >= n-k) tmp = n-k;
        else tmp = k;
        ll minn=0,maxx=0;
        for(int i = 0; i < tmp; i++) minn+=a[i];
        for(int i = tmp; i < n; i++) maxx+=a[i];
        cout<<maxx-minn<<endl;
   }
    return 0;
}
//Code by QT