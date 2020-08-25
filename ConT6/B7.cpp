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

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n, tmp;
        cin>>n;
        vi a,b;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            a.pb(tmp);
            b.pb(tmp);
        }
        int l = 1;
        int r = n;
        stable_sort(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                l = i+1;
                break;
            } 
        }
        for(int i = n-1; i >= 0; i--){
            if(a[i] != b[i]){
                r = i+1;
                break;
            } 
        }
        cout<<l<<" "<<r<<endl;
        a.clear();
        b.clear();
   }
    return 0;
}
//Code by QT