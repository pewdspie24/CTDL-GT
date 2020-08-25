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
        ll tmp,k,temp=-1;
        vll a;
        ll sol;
        // priority_queue <ll, vll, g > a;
        cin>>n>>k;
        int kt = 0;
        sol = -1;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            a.pb(tmp);
            if(tmp < k) continue;
            if(tmp == k){
                kt = 1;
                sol = i+1;
            }
            if(kt == 0 && tmp > k && a[i-1] < k){
                sol = i;
                kt = 1;
            }
        }
        if(kt == 0) cout<<"-1" <<endl;
        else cout<<sol<<endl;
        a.clear();
   }
    return 0;
}
//Code by QT