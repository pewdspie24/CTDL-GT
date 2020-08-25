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
const ll modu = 1e9+7;

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
       int n,tmp;
       ll sum=0;
       priority_queue< int,vector<int>, greater<int> > sol;
       cin>>n;
       for(int i = 0; i < n; i++){
           cin>>tmp;
           sol.push(tmp);
       }
       for(int i = 0; i < n; i++){
           ll temp = sol.top()*i;
           temp%=modu;
           sum+=temp;
        //    cout<<sol.top()<<" ";
           sol.pop();
           sum%=modu;
       }
       cout<<sum<<endl;
       while(sol.size()!=0) sol.pop();
   }
    return 0;
}
//Code by QT