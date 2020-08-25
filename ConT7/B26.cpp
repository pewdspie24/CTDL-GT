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

int res[10000000] = {0};

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    vi a;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        a.pb(tmp);
    }
    stack<int> b;
    b.push(0);
    res[0] = 1;
    for(int i = 1; i < n; i++){
        if(!b.empty())
        while(!b.empty() && a[i] >= a[b.top()])
        b.pop();
        if(b.empty()) res[i] = i+1;
        else res[i] = i-b.top();
        b.push(i);
    }
    for(int i = 0; i < n; i++) cout<<res[i]<<" ";
    return 0;
}
//Code by QT