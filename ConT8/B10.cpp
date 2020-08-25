#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ONLY_CPP ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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

int n;
int process(int n){
    set <int> vis;
    queue<II> q;
    vis.insert(n);
    q.push({n,0});
    while(!q.empty()){
        II s = q.front(); q.pop();
        if(s.first == 1) 
            return s.second;
        if(s.first - 1 == 1)
            return s.second + 1;
        if(vis.find(s.first - 1) == vis.end()){
            vis.insert(s.first - 1);
            q.push({s.first - 1, s.second + 1});
        }
        for(int i = 2 ; i * i <= s.first ; i++){
            if(s.first % i == 0){
                if(vis.find(s.first / i) == vis.end()){
                    q.push({s.first / i, s.second + 1});
                    vis.insert(s.first / i);
                }
            }
        }
    }
}
void solve(){
    cin >> n;
    cout << process(n) << '\n';
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        solve();
   }
    return 0;
}
//Code by QT