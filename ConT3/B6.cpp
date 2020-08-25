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
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        int kt = 0;
        for(int i = 0; i < n/2; i++){
            if(a[i] != b[i] && a[i] != b[n-i-1]){
                kt = 1;
                break;
            }
            if(a[n-i-1] != b[i] && a[n-i-1] != b[n-i-1]){
                kt = 1;
                break;
            }
        }
        if(kt == 0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
   }
    return 0;
}
//Code by QT