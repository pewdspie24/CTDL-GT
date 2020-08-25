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
        string s;
        stack <int> a;
        while(!a.empty()) a.pop();
        a.push(-1);
        cin>>s;
        int kt = 0;
        int res = 0;
        if(s.size() != 0)
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                a.push(i);
            } 
            else{
                if(a.empty()){
                    continue;
                }
                a.pop();
                if(!a.empty())
                res = max(res,i-a.top());
                else{
                    a.push(i);
                }
            }
        }
        cout<<res<<endl;
   }
    return 0;
}
/*
4
((()
)()())
()(()))))
))()(((()
*/
//Code by QT