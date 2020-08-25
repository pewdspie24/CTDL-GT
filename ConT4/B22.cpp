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

int binsearch(vector<int> v, int l, int r, int k){
    if(r >= l){
        int mid = l+(r-l)/2;
        if(v[mid] == k) return mid;
        if(v[mid] > k) return binsearch(v,l,mid-1,k);
        else return binsearch(v,mid+1,r,k);
    }
    return -1;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        vi a;
        int n,k,tmp;
        cin>>n>>k;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            a.pb(tmp);
        }
        int res = binsearch(a,0,a.size()-1,k);
        if(res == -1) cout<<"NO"<<endl;
        else cout<<res+1<<endl;
        a.clear();
   }
    return 0;
}
//Code by QT