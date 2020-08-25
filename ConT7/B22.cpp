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
        ll n, tmp, res=0, cur;
        vll a;
        stack<ll> b;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            a.pb(tmp);
        }
        for(int i = 0; i < n; i++){
            if(b.empty()){
                b.push(i);
                continue;
            }
            else if(a[b.top()] <= a[i]){
                b.push(i);
                continue;
            }
            else{
                tmp = b.top();
                b.pop();
                if(b.empty()){
                    cur = a[tmp]*i;
                }
                else cur = a[tmp]*(i-b.top()-1);
                res = max(res,cur);
                i--;
            }
        }
        while(!b.empty()){
            tmp = b.top();
            b.pop();
            if(b.empty()){
                cur = a[tmp]*n;
            }
            else cur = a[tmp]*(n-b.top()-1);
            res = max(res,cur);
        }
        cout<<res<<endl;
   }
    return 0;
}
//Code by QT