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

int binsearch(vector<ll> v, int l, int r, int k){
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
        ll n,x, tmp, index=0, maxx = 0;
        cin>>n>>x;
        vll a;
        a.clear();
        int kt = 0;
        // cout<<n<<endl;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            if(i!=0)
            if(kt == 0 && i != 0 && tmp <= a.front()){
                index = i; 
                maxx = a.front();
                kt = 1;
            }
            a.pb(tmp);
        }
        // cout<<index<<endl;
        if(index == 0){
            cout<<binsearch(a,0,n-1,x)+1<<endl;
        }
        else if(x < maxx) cout<<binsearch(a,index,n-1,x)+1<<endl;
        else cout<<binsearch(a,0,index-1,x)+1<<endl;
   }
    return 0;
}
//Code by QT