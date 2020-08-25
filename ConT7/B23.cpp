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
        stack <char> b;
        stack <ll> a;
        string s;
        cin>>s;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                ll tmp = 0;
                while(s[i] >= '0' && s[i] <= '9'){
                    tmp = tmp*10+s[i]-'0';
                    i++;
                    if(i == s.size()) break;
                }
                i--;
                a.push(tmp);
            } 
            else if(s[i] != ']') b.push(s[i]);
            else{
                string res ="";
                if(!b.empty())
                while(b.top() != '['){
                    res+=b.top();
                    b.pop();
                    if(b.empty()) break;
                }
                b.pop();
                reverse(res.begin(), res.end());
                ll tmp = a.top();
                a.pop();
                string sol = res;
                // reverse(sol.begin(), sol.end());
                for(int i = 0; i < tmp-1; i++) sol+=res;
                // cout<<"hhjhj"<<endl;
                for(int i = 0; i < sol.size(); i++) b.push(sol[i]);
            }
        }
        string kq="";
        while(!b.empty()){
            kq+=b.top();
            b.pop();
        }
        reverse(kq.begin(), kq.end());
        cout<<kq<<endl;
   }
    return 0;
}
//Code by QT