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
        int k;
        cin>>k;
        string s;
        cin>>s;
        int dem = 0;
        int a[300]={0};
        for(int i = 0; i < s.size(); i++){
            a[s[i]]++;
            dem++;
        }
        if(dem <= k) cout<<0<<endl;
        else{
            priority_queue <int> res;
            for(int i = 0; i < 300; i++){
                if(a[i] != 0) res.push(a[i]);
            }
            while(k!=0){
                int tmp = res.top();
                res.pop();
                tmp-=1;
                res.push(tmp);
                k--;
            }
            ll sol = 0;
            while(res.size() != 0){
                // cout<<res.top()<<endl;
                sol+= res.top()*res.top();
                res.pop();
            }
            cout<<sol<<endl;
        }
        
        // sort(a,a+255, greater<int>());
        // vi sol;
        // int i = 0;
        // while(a[i] != 0){
        //     sol.pb(a[i]);
        //     i++;
        // }
        // while(k!=0){
        //     sol[0]--;
        //     if(sol[0] < sol[1]);
        //     sort(sol.begin(),sol.end(), greater<int>()); //max là 255 nên k quá nhiều
        //     k--;    
        // }
        // ll res = 0;
        // for(int i = 0; i < sol.size(); i++){
        //     res+=sol[i]*sol[i];
        // }
        // cout<<res<<endl;
        // sol.clear();
   }
    return 0;
}
//Code by QT