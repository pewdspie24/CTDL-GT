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
        cin>>n;
        priority_queue< ll,vector<ll>,greater<ll> > a;
        priority_queue< ll,vector<ll> > b;
        ll tmp;
        ll sum = 0;
        for(int i = 0; i < n; i++){ 
            cin>>tmp;
            a.push(tmp);
        }
        for(int i = 0; i < n; i++){
            cin>>tmp;
            b.push(tmp);
        }
        for(int i = 0; i < n; i++){
            sum+=a.top()*b.top();
            a.pop();
            b.pop();
        }
        cout<<sum<<endl;
        while(a.size()!=0) a.pop();
        while(b.size()!=0) b.pop();
   }
    return 0;
}
//Code by QT