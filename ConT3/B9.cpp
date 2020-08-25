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
        vector <II> sol;
        priority_queue<int,vi,greater<int> > res;
        int n;
        cin>>n;
        int tmp, deadl, prof;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            cin>>deadl>>prof;
            sol.pb(mp(deadl,prof));
        }
        sort(sol.begin(), sol.end());
        int deadID = 1;
        res.push(sol[0].se);
        int tong = 0;
        for(int i = 1; i < n; i++){
            while(deadID == sol[i].fi){
                if(sol[i].se > res.top()){
                    res.pop();
                    res.push(sol[i].se);
                }
                i++;
                if(i==n) break;
            }
            if(i==n) break;
            deadID++;
            res.push(sol[i].se);
        }
        int demm = res.size();
        while(res.size() != 0){
            tong+=res.top();
            res.pop();
        }
        cout<<demm<<" "<<tong<<endl;
        sol.clear();
   }
    return 0;
}
//Code by QT