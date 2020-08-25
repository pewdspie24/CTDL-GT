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
    int n;
    cin>>n;
    int tmp;
    priority_queue< ll,vll,greater<ll> > a;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        a.push(tmp);
    }
    ll tong = 0;
    // ll tongtmp = a.top();
    while(a.size()>1){
        ll temp1 = a.top();
        a.pop();
        ll temp2 = a.top();
        a.pop();
        // tong+=temp1+temp2;
        ll abc = (temp1+temp2)%M;
        tong += abc;
        tong %= M;
        a.push(abc);
    }
    // tong%=M;
    cout<<tong<<endl;
    return 0;
}
//Code by QT