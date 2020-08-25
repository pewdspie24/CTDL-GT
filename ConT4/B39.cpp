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
        // priority_queue<ll,vll,greater<ll> > a;
        // priority_queue<ll, vll, greater<ll> > b;
        ll n, sol;
        int kt = 0;
        ll tmp;
        cin>>n;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        for(int i = 0; i < n-1; i++){
            cin>>tmp;
            if(tmp != a[i] && kt == 0){
                sol = i+1;
                kt = 1;
            }
        }
        cout<<sol<<endl;
   }
    return 0;
}
//Code by QT