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
        ll n,m,k, tmp;
        cin>>m>>n>>k;
        priority_queue <ll, vll, greater<ll > > sol;
        for(int i = 0; i < n+m; i++){
            cin>>tmp;
            sol.push(tmp);
        }
        // int dem = 0;
        k--;
        while(k--){
            // cout<<sol.top()<<endl;
            sol.pop();

        } 
        cout<<sol.top()<<endl;
        while(sol.size() != 0) sol.pop();
   }
    return 0;
}
//Code by QT