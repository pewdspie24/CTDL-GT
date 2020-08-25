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

int ABS(int x, int y){
    if(x >= y) return x-y;
    else return y-x;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        multimap <int,int> res;
        multimap <int,int> :: iterator p;
        II temp;
        int n,x,tmp;
        cin>>n>>x;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            temp.se = tmp;
            temp.fi = ABS(tmp,x);
            res.insert(temp);
        }
        for(p = res.begin(); p != res.end(); p++){
            cout<<(*p).se<<" ";
        }
        cout<<endl;
        res.clear();
   }
    return 0;
}
//Code by QT