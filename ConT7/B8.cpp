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
        stack <II> a;
        cin>>s;
        int kt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' && i == 0){
                a.push(mp(i,2));
                continue;
            }
            if(s[i] == '(' && s[i-1] == '-'){
                a.push(mp(i,1));
            }
            else if(s[i] == '(' && s[i-1] != '-' && s[i-1] != '+'){
                a.push(mp(i,2));
            } 
            else if(s[i] == '(' && s[i-1] == '+'){
                a.push(mp(i,2));
            }
            else if(s[i] == ')'){
                II tmp;
                tmp = a.top();
                if(tmp.se == 1) 
                for(int j = tmp.fi+1; j < i; j++){
                    if(s[j] == '+') s[j] = '-';
                    else if(s[j] == '-') s[j] = '+';
                }
                a.pop();
            }
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '(' && s[i] != ')') cout<<s[i];
        }
        cout<<endl;
   }
    return 0;
}
//Code by QT