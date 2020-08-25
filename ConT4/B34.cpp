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

ll c[10000000];

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int m,n;
        cin>>m>>n;
        int a[m],b[n];
        for(int i = 0; i < m; i++) cin>>a[i];
        for(int i = 0; i < n; i++) cin>>b[i];
        int maxx = m+n;
        for(int i = 0; i < m+n; i++) c[i] = 0;
        for(int i = 0; i < m ;i++){
            for(int j = 0; j < n; j++){
                c[i+j]+=a[i]*b[j];
            }
        }
        for(int i = 0; i < m+n-1; i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
   }
    return 0;
}
//Code by QT