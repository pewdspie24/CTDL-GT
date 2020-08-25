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
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int k, in;
        deque<int> dq;
        for(int i = 0; i < n; i++){
            cin>>k;
            if(k == 3) cin>>in;
            if(k == 1) cout<<dq.size()<<endl;
            else if(k == 2){
                if(dq.empty()) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else if(k == 3) dq.pb(in);
            else if(k == 4){
                if(!dq.empty()) dq.pop_front();
            }
            else if(k == 5){
                if(!dq.empty()) cout<<dq.front()<<endl;
                else cout<<"-1"<<endl;
            }
            else if(k==6){
                if(!dq.empty()) cout<<dq.back()<<endl;
                else cout<<"-1"<<endl;
            }
        }
   }
    return 0;
}
//Code by QT