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
        stack <char> a;
        while(!a.empty()) a.pop();
        cin>>s;
        int kt = 0;
        if(s.size() != 0)
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '[' || s[i] == '(' || s[i] == '{') a.push(s[i]);
            else{
                if(a.empty()){
                    kt = 1;
                    break;
                }
                else{
                    if(s[i] == ')' && a.top() == '('){
                        a.pop();
                        continue;
                    }
                    if(s[i] == ']' && a.top() == '['){
                        a.pop();
                        continue;
                    }
                    if(s[i] == '}' && a.top() == '{'){
                        a.pop();
                        continue;
                    }
                    if(s[i] == ')' && a.top() != '('){
                        kt = 1;
                        break;
                    }
                    if(s[i] == ']' && a.top() != '['){
                        kt = 1;
                        break;
                    }
                    if(s[i] == '}' && a.top() != '{'){
                        kt = 1;
                        break;
                    }
                }
            }
        }
        if(a.size() != 0) kt = 1;
        if(!kt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }
    return 0;
}
//Code by QT