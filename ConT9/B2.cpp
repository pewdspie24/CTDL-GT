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

int main ()
{
    ONLY_CPP
    int T=1;
    // cin>>T;
    while(T--){
        int n;
        vector<II> q;
        cin>>n;
        for(int i = 1; i <= n; i++){
            cin.ignore();
            string s;
            getline(cin,s);
            stringstream ss;
            ss<<s;
            while(ss>>s){
                int tmp = stoi(s);
                q.pb(mp(min(i,tmp),max(i,tmp)));
            }
        }
        sort(q.begin(),q.end());
        q.erase(unique(q.begin(),q.end()),q.end());
        for(int i = 0; i < q.size(); i++){
            cout<<q[i].fi<<" "<<q[i].se<<endl;
        }
   }
    return 0;
}
//Code by QT