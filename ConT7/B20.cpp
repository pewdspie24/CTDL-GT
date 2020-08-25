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
        vi a;
        int check[limit]={0};
        stack <int> b;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            a.pb(tmp);
        }
        // for(int i = 0; i < n; i++) cout<<a[i];
        // cout<<endl;
        b.push(0);
        for(int i = 1; i < n; i++){
            if(a[i] > a[b.top()]){
                // cout<<"smt";
                while(a[i] > a[b.top()] && !b.empty()){
                    check[b.top()] = i;
                    b.pop();
                    if(b.empty()) break;
                }
                b.push(i);
            }
            else{
                b.push(i);
            }
        }
        while(!b.empty()){
            check[b.top()] = -1;
            b.pop();
        }
        for(int i = 0; i < a.size(); i++){
            if(check[i] == -1) cout<<-1<<" ";
            else cout<<a[check[i]]<<" ";
        }
        cout<<endl;
   }
    return 0;
}
//Code by QT